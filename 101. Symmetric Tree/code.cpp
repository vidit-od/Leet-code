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
    bool foo( TreeNode* left,TreeNode* right){
        if(left==NULL && right==NULL){
            return true;
        }
        if(left==NULL || right==NULL || (left->val != right->val)){
            return false;
        }
        bool cmp1 = foo(left->left,right->right);
        bool cmp2 = foo(left->right,right->left);
        if( cmp1 && cmp2){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL || (root->left==NULL && root->right==NULL)){
            return true;
        }
        return foo(root->left,root->right);
    }
};