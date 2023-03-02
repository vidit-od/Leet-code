class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long>stack;
        
        for(int i=0 ; i<size(tokens); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                long numr=stack.top();
                stack.pop();
                long numl=stack.top();
                stack.pop();

                if( tokens[i] == "+"){
                    stack.push( numl + numr );
                }
                else if ( tokens[i] == "-"){
                    stack.push( numl - numr );
                }
                else if ( tokens[i] == "*"){
                    stack.push( numl * numr );
                }
                else if ( tokens[i] == "/"){
                    stack.push( numl / numr );
                }
            }
            else{
                stack.push(stoi(tokens[i]));
            }
        }
        return stack.top();
    }
};