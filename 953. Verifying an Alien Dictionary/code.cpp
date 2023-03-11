class Solution {
public:
    bool alien(string word1,string word2, unordered_map<char,int>map){
        int a = word1.size();
        int b = word2.size();
        int i = 0;
        int mina = min(a,b);

        while( i <= mina ) {
            if( map[word1[i]] > map[word2[i]]){
                return false;
            }
            else if(map[word1[i]] < map[word2[i]] ){
                return true;
            }
            i++;
        }
        if(a>b){
            return false;
        }
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        int n = size(order);
        unordered_map<char,int>map;
        for(int i=0; i<n; i++){
            map[order[i]]=i;
        }
        n = size(words);
        for(int i=0; i<n-1; i++){
            string word1 = words[i];
            string word2 = words[i+1];
            bool check = alien(word1,word2,map);
            if( check == false){
                return false;
            }
        }
        return true;
    }
};