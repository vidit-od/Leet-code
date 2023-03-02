class Solution {
public:
    bool isAnagram(string s, string t) {
    map <char, int>mp1; 
    for(auto i : s){
        mp1[i]++;  
    }
    map <char, int>mp2;
    for(auto i=0 ;i<t.length(); i++){
        mp2[t[i]]++;  
    }
    if( mp1 == mp2){
        return true;
    }
    return false;
    }
};