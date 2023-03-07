class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int high = size(matrix)-1;
        int low = 0;
        while( low <= high ){
            int mid = (low+high)/2;

            if( matrix[mid][0] <= target && matrix[mid][ size(matrix[0])-1 ]>=target ){
                low =0;
                high = size(matrix[0])-1;

                while( low <= high){
                    int mid2 = (low + high)/2;

                    if( matrix[mid][mid2] == target ){
                        return true;
                    } 
                    else if( matrix[mid][mid2] > target){
                        high = mid2 -1;
                    }
                    else{
                        low = mid2+1;
                    }
                }
                return false;
            }
            if( matrix[mid][0] < target ){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return false;
    }
};