class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>a(26);
        for(auto i : magazine){
            a[i-'a']++;
        }
        for(auto i: ransomNote){
            a[i-'a']--;
            if(a[i-'a'] <0){
                return false;
            }
        }
        return true;
    }
};