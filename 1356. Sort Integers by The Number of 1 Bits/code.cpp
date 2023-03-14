int bits(int n){
        int count =0;
        while(n!=0){
            if((n&1)==1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
    bool compare(int i, int j){
        int ibits = bits(i);
        int jbits = bits(j);

        if( ibits == jbits){
            return i<j;
        }
        return ibits<jbits;
    }
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        std::sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};