
class Solution {
public:
int ans=0;
void solve(TreeNode* root,int sum){
    if (root==NULL) return ;
    sum=sum*10+root->val;
    if (root->left==NULL && root->right==NULL){
        //matlab apan leaf node pe aagye
        ans+=sum;

    }
    solve(root->left,sum);
    solve(root->right,sum);
}
    int sumNumbers(TreeNode* root) {
        solve(root,0);
        return ans;
        
    }
};