class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = size(piles);
        int high = 0;
        for(int i =0; i<n; i++){
            if( piles[i] > high ){
                high = piles[i];
            }
        }

        int low = 1;
        int ans = high;
        while( low <= high ){
            int mid = floor((low + high)/2);
            long total = 0;
            for(int i = 0; i<n; i++){
                total = total + ceil(piles[i]/ (double)mid);
            }
            if( total>h ){
                low = mid + 1;

            }
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;  
    }
};