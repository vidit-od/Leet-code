class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = size(mat);
        int n = size(mat[0]);
        vector<vector<int>>ans;
        vector<int>temp;
        int a = c;

        if( m*n != r*c || m == r && n == c){
            return mat;
        } 
        else{
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    if( a != 0){
                        temp.push_back(mat[i][j]);
                        a--;
                    }
                    else{
                        ans.push_back(temp);
                        a =c;
                        temp.clear();
                        temp.push_back(mat[i][j]);
                        a--;
                    }
                }
            }
        }
        ans.push_back(temp);
        return ans;
    }
};