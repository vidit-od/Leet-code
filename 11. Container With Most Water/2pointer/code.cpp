class Solution {
public:
    int maxArea(vector<int>& height) {
        ios::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);

        int start =0;
        int end = size(height)-1;
        int max = 0;
        while(start != end){
            int length = min( height[start] , height[end] );
            int width = end-start;
            int area = length * width; 
            
            if( area > max ){
                max = area; 
            }
            if(height[start] > height[end]){
                end--;
            }
            else{
                start++;
            }
        }
    return max;
    }
};