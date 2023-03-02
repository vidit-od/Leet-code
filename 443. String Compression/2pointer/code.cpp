class Solution {
public:
    int compress(vector<char>& chars) {
        if(size(chars) == 1){
            return 1;
        }
        int i =0;
        int j =0;
        int n = chars.size();
        
        while(i< n){
            int count = 1;
            while(i< n-1 && chars[i] == chars[i+1]){
                count++;
                i++;
            }
            chars[j] = chars[i];
            j++;
            i++;
            if(count>1){
                string k = to_string(count);
                for(char c: k){
                    chars[j++]=c;
                }
            }
        }
        return j;
    }
};