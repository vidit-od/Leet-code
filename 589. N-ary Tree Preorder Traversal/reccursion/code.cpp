/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void fun(Node* child, vector<int>& ans){
        ans.push_back(child->val);
        for(int i=0; i< child->children.size(); i++){
            fun(child->children[i],ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        fun(root,ans);
        return ans;
    }
};