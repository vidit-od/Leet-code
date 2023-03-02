class Solution {
public:
    bool isAnagram(string s, string t) {
    
    int array[26]={0};
    if(s.length()!= t.length()) {
        return false;
    } 
    else {
        for(int i=0; i<s.length(); i++) {
            int index_s = int (s[i])-97;
            int index_t = int (t[i]) -97;
            array[index_s]++;
            array[index_t]--;
        }
        for(int i=0; i<26; i++) {
            if (array[i] !=0){
                return false;
            }
        }
        return true;
    }
    
    }
};