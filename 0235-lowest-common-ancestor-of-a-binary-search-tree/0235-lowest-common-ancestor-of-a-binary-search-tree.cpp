/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=NULL;
    void fun(TreeNode* root, TreeNode* p, TreeNode* q){
        if (root==NULL) return;
        if (root==p || root==q) {
            ans=root;
            return ;
        }
        if (root->val<p->val)   fun(root->right,p,q);//root is less than both p and q go right
        else if (root->val>q->val) fun(root->left,p,q); //root dono se bada hai left aur right 
        else if (root->val>p->val && root->val<q->val) { //root p se bada hai aur q se chota dono ke bich mein
            ans=root;
            return ;
        }
       
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p->val<q->val)  fun(root,p,q);
        else if (p->val>q->val) fun(root,q,p);
        return ans;
        
    }
};