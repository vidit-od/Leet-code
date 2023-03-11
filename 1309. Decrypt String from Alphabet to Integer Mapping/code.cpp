class Solution {
public:
    string freqAlphabets(string s) {
       string ans;
       int a;
       int i= size(s)-1;
       while(i>=0){
           if(s[i] == '#'){
               i--;
               a = s[i]-'0';
               i--;
               a += (s[i]-'0')*10; 
               i--;
           }
           else{
               a = s[i]-'0';
               i--;
           }
           ans+= a+'a'-1;
       } 
       reverse(ans.begin(),ans.end());
       return ans;
    }
};