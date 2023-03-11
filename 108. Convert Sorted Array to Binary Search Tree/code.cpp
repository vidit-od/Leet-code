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
    TreeNode* foo(int low, int high,vector<int>& nums){
        if( low == high){
            return NULL;
        }
        if( low +1 == high){
            TreeNode* root = new TreeNode(nums[low]);
            return root;
        }
        int mid = (low+high)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = foo(low,mid,nums);
        root->right = foo(mid+1,high,nums);
        return root;    
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return foo(0,size(nums),nums);
    }
};