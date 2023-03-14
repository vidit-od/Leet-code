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
    int maxd(TreeNode* root, int depth){
        if( root == NULL){
            return depth;
        }
        depth++;
        int left = maxd(root->left,depth);
        int right = maxd(root->right,depth);
        return max(left,right);
    }

    int maxDepth(TreeNode* root) {
        if( root == NULL){
            return 0;
        }
        int depth = 0;
        int ans = maxd(root,depth);
        return ans;
    }
};