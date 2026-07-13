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
void helper(vector<string> &ans,TreeNode* root,string s){
    if (root==NULL) return;
    if (root->left==NULL && root->right==NULL){ //leaf node pe aagye
    s+=to_string(root->val);
    ans.push_back(s);
    return;


    }
    helper(ans,root->left,s+to_string(root->val)+"->");
    helper(ans,root->right,s+to_string(root->val)+"->");
}
    vector<string> binaryTreePaths(TreeNode* root) {
         vector<string> ans;
         helper(ans,root,"");
         return ans;
    }
};