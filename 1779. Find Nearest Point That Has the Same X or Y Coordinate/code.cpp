class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        pair<int,int>dist = {-1,-1};
        for(int i=0; i< size(points); i++){
            if( x == points[i][0] || y == points[i][1]){
                int length = abs(x - points[i][0]) + abs(y - points[i][1]);
                if( length < dist.first || dist.first == -1){
                    dist.first = length;
                    dist.second = i;
                } 
            }
        }
        return dist.second;
    }
};