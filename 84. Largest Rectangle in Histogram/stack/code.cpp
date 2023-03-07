class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = 0;
        stack<int>stack;
        for(int i = 0; i<= n; i++){
            int height;
            if(i == n){
                height = 0;
            }
            else{
                height = heights[i];
            }

            while(!stack.empty() && height < heights[stack.top()]){
                int top = stack.top();
                int width;
                stack.pop();

                if(stack.empty()){
                    width = i;
                }
                else{
                    width = i - stack.top() -1;
                }
                int area = width * heights[top];
                maxarea = max(maxarea, area);
            }
            stack.push(i);
        }
        return maxarea;
    }
};