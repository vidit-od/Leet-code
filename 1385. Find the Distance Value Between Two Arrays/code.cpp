class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count = 0;
        for(auto i: arr1){
            int min = i-d;
            int max = i+d;

            auto l = lower_bound(arr2.begin(),arr2.end(),min);
            auto h = lower_bound(arr2.begin(),arr2.end(),max);

            if( l==h && *l !=min && *l!=max){
                count++;
            }
        }
        return count;
    }
};