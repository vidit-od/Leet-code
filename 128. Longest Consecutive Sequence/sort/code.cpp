class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(size(nums)<1){
            return 0;
        }
        else if(size(nums) == 1 ){
            return 1;
        }
        sort(nums.begin(),nums.end());
        int maxlength =0;
        int count =0;
        for (auto i=0; i<size(nums); i++){
            if(i== size(nums)-1){
                if(count > maxlength){
                    maxlength=count;
                    count=0;
                }
                break;
            }
            if( nums[i]== nums[i+1]){
                continue;
            }
            else if( nums[i+1] != nums[i]+1){
                if(count > maxlength){
                    maxlength=count;
                }
                count=0;
            }
            else if (nums[i+1] == nums[i]+1){
                count++;
            }
        }
        maxlength++;
        return maxlength;
    }
};