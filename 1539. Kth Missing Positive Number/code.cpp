class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = size(arr);
        int a = k;
        for(int i=0; i<n ; i++){
            if(i==0){
                k = k - (arr[i]-1); 
                if(k<=0){
                    return a;
                }
            }
            else{
                k = k - (arr[i]-arr[i-1]-1);
                if(k<=0){
                    return arr[i]+k-1;
                }
            }
        }
        return arr[n-1]+k;
    }
};