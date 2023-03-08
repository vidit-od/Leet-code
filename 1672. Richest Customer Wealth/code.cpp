class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int m = size(accounts);
       int n = size(accounts[0]);
       int maxv = 0;
       for( int i = 0; i<m; i++){
           int curr = 0;
           for(int j = 0; j<n; j++){
               curr += accounts[i][j];
           } 
           if(maxv<curr) maxv=curr;
       }
       return maxv;
    }
};