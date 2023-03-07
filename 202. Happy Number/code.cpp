class Solution {
public:
    int num(int n){
        int newnum = 0;
        while(n!=0){
            int num = n%10;
            newnum += num*num;
            n = n/10;
        }
        return newnum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = num(n);
        while(fast !=1 && slow != fast){
            slow = num(slow);
            fast = num(num(fast));
        }
        if(fast == 1){
            return true;
        }
        else{
            return false;
        }
    }
};