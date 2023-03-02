class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0 || s.length() == 1){
            return true;
        }
        int start =0;
        int end = s.length()-1;
        
        while (start <= end){
            int  i = tolower(s[start]);
            int j = tolower(s[end]);

            if(not(i>=97 && i<= 122 || i>=48 && i<=57)){
                start++;
            }
            else if(not(j>=97 && j<= 122 || j>=48 && j<=57)){
                end--;
            }
            else{
                if(i == j){
                    start ++;
                    end --;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};