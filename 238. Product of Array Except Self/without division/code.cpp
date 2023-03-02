class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int> ans;
        vector<int> left;
        vector<int> right(size(nums));

        for(auto i: nums){
            prod=prod*i;
            left.push_back(prod);    
        }
        prod=1;
        for(int i = size(nums)-1 ; i>=0; i--){
            prod=prod*nums[i];
            right[i]=prod;    
        }
        for(int i = 0; i< size(nums) ; i++){
            if(i==0){
                ans.push_back(right[1]);
            }
            else if( i== size(nums)-1){
                ans.push_back(left[size(nums)-2]);
            }
            else{
                ans.push_back(left[i-1]*right[i+1]);
            }
        }
        return ans;
    }
};