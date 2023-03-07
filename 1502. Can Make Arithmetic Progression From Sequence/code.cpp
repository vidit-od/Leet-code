class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = size(arr);
        int diff;
        for(int i=0; i<n ;i++){
            if(i == 0){
                diff = arr[1] - arr[0];
            }
            else if( i!=0 && arr[i]-arr[i-1] != diff ){
                return false;
            }
        }
        return true;
    }
};