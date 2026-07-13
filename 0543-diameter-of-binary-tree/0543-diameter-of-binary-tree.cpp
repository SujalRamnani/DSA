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
int height(TreeNode* root){
    if (root==NULL) return 0;
        if (root->left==NULL && root->right==NULL) return 0;  ///leaf node hai
        int ans=1+max(height(root->left),height(root->right)); //1+leftSubtreeHeight+rightSubtreeHeight
        return ans;
}
    int diameterOfBinaryTree(TreeNode* root) {
         if (root==NULL) return 0;
        if (root->left==NULL && root->right==NULL) return 0;  ///leaf node hai
        int leftSubtree=diameterOfBinaryTree(root->left);
        int rightSubtree=diameterOfBinaryTree(root->right);
        int mid=height(root->left)+height(root->right);
        if (root->left!=NULL) mid++;
        if (root->right!=NULL) mid++;
        int ans=max(leftSubtree,max(mid,rightSubtree));
        return ans;
        
    }
};