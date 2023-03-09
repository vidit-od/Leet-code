class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary = 0;
        int n = size(mat);
        int i =0;
        while(i < n){
            primary += mat[i][i] + mat[i][n-i-1];
            i++;
        }
        if( n%2 != 0){
            primary = primary - mat[n/2][n/2];
        }
        return primary;
    }
};