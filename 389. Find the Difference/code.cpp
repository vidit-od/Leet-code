class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>map1(26);
        vector<int>map2(26);

        for( char i: s){
            map1[i-'a']++;
        }   
        for( char i: t){
            map2[i-'a']++;
        }
        for(int i=0; i<26; i++){
            if(map1[i]+1== map2[i]){
                return (char)(i + 97);
            }
        }
        return 'a';
    }
};