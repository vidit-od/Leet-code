class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    vector<char>array;
    bool ans;
    // row check
for(int i=0; i<size(board); i++){
    array.clear();
        for(int j=0; j<size(board[i]); j++){
            array.push_back(board[i][j]);
        }
        ans =check(array);
        if( ans == false){
            return false;
        }
    }
    // column check
    for(int i=0; i<size(board); i++){
        array.clear();
        for(int j=0; j<size(board[i]); j++){
            array.push_back(board[j][i]);
        }
        ans= check(array);
        if(ans == false){
            return false;
        }
    }
    //box check
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            array.clear();
            array.push_back(board[ (3*i)+0 ][(3*j)+0]);
            array.push_back(board[ (3*i)+0 ][(3*j)+1]);
            array.push_back(board[ (3*i)+0 ][(3*j)+2]);

            array.push_back(board[ (3*i)+1 ][(3*j)+0] );
            array.push_back(board[ (3*i)+1 ][(3*j)+1] );
            array.push_back(board[ (3*i)+1 ][(3*j)+2] );
            
            array.push_back(board[ (3*i)+2 ][(3*j)+0] );
            array.push_back(board[ (3*i)+2 ][(3*j)+1] );
            array.push_back(board[ (3*i)+2 ][(3*j)+2] );

            ans=check(array);
            if(ans == false){
                return false;
            }
        }
    }
    return true;
}   

    bool check( vector<char>array){
        map <char, int>mp;
        for(auto i: array){
            if(i!='.'){
                mp[i]++;
                if(mp[i]>=2){
                    return false;
                }
            }
        }
        return true;
    }
};