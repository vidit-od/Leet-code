class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low =0;
        int high = size(arr)-1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if( mid == 0){
                high =0;
                break;
            }
            if( arr[mid-1] < arr[mid] && arr[mid+1]<arr[mid]){
                return mid;
            }
            else if( arr[mid-1]> arr[mid+1]){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        return high+1;
    }
};