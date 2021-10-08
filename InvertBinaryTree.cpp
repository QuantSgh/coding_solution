class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        
        TreeNode* left = invertTree(root->right);
        TreeNode* right = invertTree(root->left);
        
        root->left = left;
        root->right = right;
        return root;
    }
};
