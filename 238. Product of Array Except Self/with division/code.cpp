class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int> ans;
        int zerocnt = count(nums.begin(),nums.end(),0);
        if (zerocnt > 1){
            return vector <int> (nums.size());
        }
        for( auto i: nums){
            if(i != 0){
                prod=prod*i;
            }
        }
        for( auto i : nums){
            if(zerocnt == 1 && i!=0){
                ans.push_back(0);
            }
            else if( zerocnt == 1 && i == 0){
                ans.push_back(prod);
            }
            else if (zerocnt == 0){
                ans.push_back(prod/i);
            }
        }

        return ans;
    }
};