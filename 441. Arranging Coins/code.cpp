class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 0;
        long long high =n;
        long long mid=0;
        while( high >= low){
            mid = (low + high)/2;
            if( (mid * (mid+1))/2 <= n){
                low = mid +1;
            }
            else{
                high = mid-1;
            }
        }
        return high;
    }
};