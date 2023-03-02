class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map < int, int>mp;
        vector< int > ans;
        int count=0;
        for( auto i : nums){
            mp[i]++;
        }

        multimap <int,int,greater<int>> mp2;
        for(auto i: mp){
            mp2.insert( {i.second , i.first });
        }
        for(auto i :mp2){
            count++;
            if(count > k){
                break;
            }
            ans.push_back(i.second);
        }
        return ans;
    }
};