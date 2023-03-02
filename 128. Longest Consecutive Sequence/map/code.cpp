class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>map;
        for(auto i=0; i<size(nums); i++){
            map[ nums[i] ] =true;
        }
        for(auto i=0; i<size(nums); i++){
            if(map.count(nums[i]-1)>0){
                map[ nums[i] ]=false;
            }
        }
        auto maxlength=0;
        for(auto i=0; i<size(nums); i++){
            if(map[ nums[i] ]==true){
                int j=0;
                int count=0;
                while(map.count(nums[i]+j)>0){
                    j++;
                    count++;
                }
                if(count > maxlength){
                    maxlength=count;
                }
            }
        }
        return maxlength;
    }
};