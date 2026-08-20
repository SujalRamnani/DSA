class Solution {
public:

    unordered_map<int,int> mp;
    int indx = 0;

    TreeNode* fun(vector<int>& preorder, int low, int high) {

        if (low > high)
            return NULL;

        int rootVal = preorder[indx];

        TreeNode* newNode = new TreeNode(rootVal);

        indx++;

        int id = mp[rootVal];

        newNode->left = fun(preorder, low, id-1);

        newNode->right = fun(preorder, id+1, high);

        return newNode;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for(int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        return fun(preorder, 0, inorder.size()-1);
    }
};