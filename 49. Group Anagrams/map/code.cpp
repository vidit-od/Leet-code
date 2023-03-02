class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map< string, vector<string>  > mp;
        
        for( auto i: strs){
            string j=i;
            sort( begin(j) , end(j) );
            mp[j].push_back(i);
        }
        vector< vector<string> > ans;
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};