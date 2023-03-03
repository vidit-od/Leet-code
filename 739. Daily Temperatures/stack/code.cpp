class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = size(temperatures);
        stack<int>stack;
        vector<int>ans(n);

        for(auto i=0; i<n ; i++){
            while(!stack.empty() && temperatures[i] > temperatures[stack.top()]){
                ans[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }
        
        return ans;
    }
};