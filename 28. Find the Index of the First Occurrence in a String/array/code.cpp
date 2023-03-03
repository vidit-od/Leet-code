class Solution {
public:
    int strStr(string haystack, string needle) {
        if(size(haystack)< size(needle)){
            return -1;
        }
       for(int i = 0; i<haystack.size() - needle.size() + 1; i++){
           int j =0;
           int max = size(needle);
           int start = i;
           bool flag = false;
           while( haystack[i] == needle[j]){
               j++;
               i++;
               if(j == max){
                   return (i-max);
               }
               if(haystack[i] == needle[0]){
                   flag = true;
               }
           }
           if(haystack[i] != needle[j] && flag){
               i = start;
           }
       }
       return -1; 
    }
};