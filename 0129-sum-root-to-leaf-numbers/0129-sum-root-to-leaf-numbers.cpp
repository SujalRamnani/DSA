class Solution {
public:
    int solve(TreeNode* root, int sum) {

        if (root == NULL)
            return 0;

        sum = sum * 10 + root->val;

        // Leaf node
        if (root->left == NULL && root->right == NULL)
            return sum;

    int ans= solve(root->left, sum) + solve(root->right, sum);
    return ans;
    }

    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};