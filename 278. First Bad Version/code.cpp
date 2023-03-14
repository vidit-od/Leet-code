// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1;
        long long high = n;
        long long mid;
        while(high<low){
            mid = low + (high-low)/2;
            if( isBadVersion(mid) ){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return mid;
    }
};