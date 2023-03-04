static const auto init = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return false;
}();

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0;
        bool minfound =false;bool maxfound =false;
        int minstart = 0;int maxstart = 0;int start =0; 
        for(int i =0; i< size(nums); i++){
            if( nums[i] < minK || nums[i] > maxK){
                minfound = false;
                maxfound = false;
                start = i+1;
            }   
            if( nums[i] == minK){
                minfound = true;
                minstart = i;
            }
            if( nums[i] == maxK){
                maxfound = true;
                maxstart = i;
            }
            if( minfound && maxfound){
                count += (min(minstart,maxstart)-start+1);
            }
        }
        return count;
    }
};