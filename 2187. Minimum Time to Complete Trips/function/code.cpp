class Solution {
public:
    bool possible(vector<int>& time, int totalTrips, long long mid){
        long long trip = 0;
        for(auto i: time){
            trip += mid/i;
            if(trip >= totalTrips){
                return false;
            }
        } 
        return true;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
       long long low = 1;
       long long high = 1e14;
       long long mid;
       while( low <= high ){
           mid = (low + high)/2;
           bool ans = possible(time,totalTrips,mid);
           if( ans == true ){
               low = mid +1;
           }
           else{
               high = mid - 1;
           }
       }
       return low; 
    }
};