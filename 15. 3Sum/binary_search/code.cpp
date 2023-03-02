class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(size(nums)<3){
            return{};
        }
        else if (size(nums) == 3){
            if(nums[0] + nums [1] + nums[2] == 0){
                return {{nums[0],nums[1],nums[2]}};
            }
            else{
                return{};
            }            
        }
        vector<vector<int>> ans;
        vector<int> value;
        sort(nums.begin(),nums.end());
        if(nums[0] > 0 ){
            return{};
        }
        for (int i=0; i<size(nums)-1; i++){
            int start = i+1;
            int end = size(nums)-1;
            if(nums[i]>0){
                return ans;
            }
            if(i>=2 && nums[i]==nums[i-1]){
                continue;
            }
            while(start != end ){
                if( nums[i]+ nums[start] +  nums[end] == 0){
                    value.push_back(nums[i]);
                    value.push_back(nums[start]);
                    value.push_back(nums[end]);
                    if (not(std::binary_search(ans.begin(), ans.end(), value))){
                    ans.push_back(value);
                    }
                    end--;
                    value.clear();
                }
                else if (nums[i]+ nums[start] +  nums[end] < 0){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return ans;
    }
};