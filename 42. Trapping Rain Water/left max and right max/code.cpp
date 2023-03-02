class Solution {
public:
    int trap(vector<int>& height) {
        int n = size(height);

        int left = 0;
        int right = n-1;

        int leftmax = height[left];
        int rightmax = height[right];

        int ans = 0;
        while(left < right){

            if(leftmax < rightmax ){
                left++;
                if( leftmax > height[left] ){
                    ans = ans + leftmax - height[left];
                }
                leftmax = max(height[left] , leftmax);
            }
            else{
                right--;
                if( rightmax > height[right] ){
                    ans = ans + rightmax- height[right];
                }
                rightmax = max(height[right], rightmax);
            }
        }
        return ans;
};
};