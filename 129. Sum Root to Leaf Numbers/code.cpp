/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        stack<pair<TreeNode*,int>> st;
        st.push({root,0});
        int sum =0;
        while( !st.empty() ){
            TreeNode* top = st.top().first;
            int curr_total = st.top().second;
            curr_total = curr_total *10 + top->val;
            st.pop();
            if(top != NULL){
                if(top->left==NULL && top->right==NULL){
                    sum += curr_total;
                }
                else{
                    if(top->left){
                        st.push({top->left,curr_total});
                    }
                    if(top->right){
                        st.push({top->right,curr_total});
                    }
                }
            }
        }
        return sum;
    }
};