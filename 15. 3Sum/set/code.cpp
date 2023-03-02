class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(size(nums)<3){
            return{};
        }
        set<vector<int>> ans;
        vector<vector<int>> vans;
        sort(nums.begin(),nums.end());
        for (int i=0; i<size(nums)-1; i++){
            int start = i+1;
            int end = size(nums)-1;
            while(start != end ){
                if( nums[i]+ nums[start] +  nums[end] == 0){
                    ans.insert({nums[i],nums[start], nums[end]});
                    end--;
                }
                else if (nums[i]+ nums[start] +  nums[end] < 0){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        for(auto i: ans){
            vans.push_back(i);
        }
        return vans;
    }
};