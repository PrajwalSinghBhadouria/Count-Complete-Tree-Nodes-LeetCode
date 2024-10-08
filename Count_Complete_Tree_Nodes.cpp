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
    void solve(TreeNode *root, vector<int> &v){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        solve(root->left,v);
        solve(root->right,v);
    }
    int countNodes(TreeNode* root) {
        vector<int> v;
        
        solve(root,v);
        if(v.empty()){
            return 0;
        }
        int s = v.size();
        return s;
    }
};
