class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector< pair<int,int> >car;
        for( int i = 0; i< size(position); i++){
            car.push_back({position[i],speed[i]});
        }
        sort( car.begin(), car.end(), greater<pair<int,int>>());
        double time = 0;
        int ans = 0;
        for( int i = 0; i< size(position); i++){
            double t = (target-car[i].first)*(1.0/car[i].second);
            if( t > time ){
                time = t;
                ans++;
            }
        }
        return ans;
    }
};