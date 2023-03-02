class Solution {
public:
    bool isValid(string s) {
        if(size(s) == 1){
            return false;
        }
        stack<char> stack;
        stack.push('.');
        for( auto i : s){
           if( i == '(' || i == '{' || i == '['){
               stack.push(i);
           }
           else{
               if (i == ')' && stack.top() == '('){
                   stack.pop();
               }
               else if (i == '}' && stack.top() == '{'){
                   stack.pop();
               }
               else if (i == ']' && stack.top() == '['){
                   stack.pop();
               }
               else{
                   return false;
               }
           }
       }
       if(stack.top() == '.'){
           return true;
       }
       else{
           return false;
       }
    }
};