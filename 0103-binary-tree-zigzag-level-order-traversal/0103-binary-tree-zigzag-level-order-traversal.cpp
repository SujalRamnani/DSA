class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) { 
        vector<vector<int>> ans;

        if (root == NULL) return {};

        bool leftToRight = true;

        queue<TreeNode*> q;
        q.push(root);

        while (q.size() != 0) {

            int levelSize = q.size();

            vector<int> temp(levelSize, 0);

            int firstIndex = 0;
            int lastIndex = levelSize - 1;

            while (levelSize--) {

                TreeNode* t = q.front();
                q.pop();

                if (leftToRight == true) {
                    temp[firstIndex] = t->val;
                    firstIndex++;
                }
                else {
                    temp[lastIndex] = t->val;
                    lastIndex--;
                }

                if (t->left != NULL)
                    q.push(t->left);

                if (t->right != NULL)
                    q.push(t->right);
            }

            ans.push_back(temp);

            leftToRight = !leftToRight;
        }

        return ans;
    }
};