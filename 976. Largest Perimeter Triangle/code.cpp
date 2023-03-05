static const auto init = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return false;
}();
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       sort( nums.begin(), nums.end());
       int n = size(nums);
       for(int i=n-1;i>=2;i--){
           if(nums[i]< nums[i-1] + nums[i-2]){
               return( nums[i]+ nums[i-1] + nums[i-2]);
           }
       }
       return 0;
    }
};