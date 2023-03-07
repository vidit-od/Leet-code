class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
       long long low = 1;
       long long high = 1e14;
       long long mid;
       while( low <= high ){
           mid = (low + high)/2;
           long long trip = 0;
           for(int i =0; i< size(time); i++){
               trip = trip + floor(mid/time[i]);
           }
           if( trip < totalTrips){
               low = mid +1;
           }
           else{
               high = mid -1;
           }
       }
       return low; 
    }
};