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
    int sumOfLeftLeaves(TreeNode* root){
        int sum =0;
        if(root ==NULL || (root->left==NULL && root->right==NULL)){
            return sum;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front->left){
                TreeNode* left = front->left;
                if( left->left==NULL && left->right==NULL){
                    sum += left->val;
                }
                else{
                    q.push(left);
                }
            }
            if(front->right){
                q.push(front->right);
            }
        }
        return sum;
    }
};