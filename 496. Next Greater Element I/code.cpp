class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        int n = size(nums1);
        int m = size(nums2);
        for(int i = 0; i<m; i++){
            map[nums2[i]]=i;
        }
        vector<int>ans;
        for(int i = 0; i<n; i++){
            int index = map[nums1[i]]; 
            int j =  index +1;
            if(j == m){
                ans.push_back(-1);    
            }
            else{
                while(j < m){
                    if( nums1[i] < nums2[j]){
                        ans.push_back(nums2[j]);   
                        break;
                    }
                    j++;
                }
                if(j == m){
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};