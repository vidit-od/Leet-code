class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i = 0;i< size(command); i++){
            if( command[i] == 'G'){
                ans.push_back('G');
            }
            if( command[i] == ')' && command[i-1] == '('){
                ans.push_back('o');
            }
            if( command[i] == ')' && command[i-1] == 'l'){
                ans.push_back('a');
                ans.push_back('l');
            }
        }
        return ans;
    }
};