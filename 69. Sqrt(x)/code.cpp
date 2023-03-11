class Solution {
public:
    int mySqrt(int x) {
       long long low = 0;
       long long high = x;

       while(low <= high){
           long long mid = (low+high)/2;
           long long sq = mid*mid;
           long long sq2 = (mid+1)*(mid+1);
           if( sq<=x && sq2>x){
               return mid;
           }
           else if( sq >x){
               high = mid-1;
           }
           else{
               low = mid+1;
           }
       } 
       return 0;
    }
};