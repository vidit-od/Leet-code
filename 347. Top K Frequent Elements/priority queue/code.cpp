class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map < int, int>a;
        vector< int > b;
        int count=0;
        for( auto i : nums){
            a[i]++;
        }
        priority_queue <pair<int,int>> c;
        for( auto i: a){
            c.push({i.second,i.first});
        }
        for(int i=0; i<k; i++){
            auto s=c.top();
            b.push_back(s.second);
            c.pop();
        }
        return b;
    }
};