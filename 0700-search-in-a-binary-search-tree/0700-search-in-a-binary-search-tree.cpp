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
    TreeNode* searchBST(TreeNode* root, int k) {
        TreeNode* ans;
        if (root==NULL) return NULL;
        if (root->val==k){
            ans=root;
            return ans;
        }
       if (root->val>k){
       return searchBST(root->left,k);
       }
       else return searchBST(root->right,k);
       return NULL;
        
    }
};