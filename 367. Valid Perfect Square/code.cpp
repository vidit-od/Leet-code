class Solution {
public:
    bool isPerfectSquare(int num) {
        if( num ==1 || num ==4){
            return true;
        }
        
        int high = num;
        int low = 0;

        while( low < high ){
            long long mid = low + (high-low)/2;
            if( mid*mid == num){
                return true;
            }
            else if( num > mid*mid){
                low = mid +1;
            }
            else{
                high = mid;
            }
        }
        return false;
    }
};