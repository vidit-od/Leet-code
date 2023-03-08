class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = size(nums)-1;
        int mid = 0;
        while( high > low){
            mid = ( high + low )/2;
            if( nums[mid] > nums[high]){
                low = mid + 1;
                mid = (high + low)/2;
            }
            else{
                high = mid;
            }
        }
        return nums[mid];   
    }
};