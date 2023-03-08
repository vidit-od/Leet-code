class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int>::iterator it;
        for( auto i = 0; i !=size(nums); i++){
            if(nums[i]==0){
                count++;
            }
        }
        it = remove(nums.begin(),nums.end(),0);
        for(int i = 0; i<count; i++){
            nums.pop_back();
        }
        while( count != 0){
            nums.push_back(0);
            count --;
        }
    }
};