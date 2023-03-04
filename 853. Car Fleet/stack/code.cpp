static const auto init = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return false;
}();

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if (position.empty()) return 0;
        if (position.size() == 1) return 1;
        
        vector< pair<int,int> >car;
        for( int i = 0; i< size(position); i++){
            car.push_back({position[i],speed[i]});
        }
        sort( car.begin(), car.end(), greater<pair<int,int>>());
        stack<float>stack;
        stack.push(0);
        for( int i = 0; i< size(position); i++){
            double t = (target - car[i].first)*(1.0/car[i].second);
            if( t > stack.top()){
                stack.push(t);
            }
        }
        return (stack.size()-1);
    }
};