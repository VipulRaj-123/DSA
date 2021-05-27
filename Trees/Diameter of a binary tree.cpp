/* Diameter of a binary tree in the maximum length of edge from deepest left leaf to deepest right leaf and vice versa */
class Solution {
private:
    int diam = 0;
    int maxHeight(TreeNode *root) {
        if (!root || (!root->left && !root->right)) return 0;
        int left = 0, right = 0;
        if (root->left) left = 1 + maxHeight(root->left);
        if (root->right) right = 1 + maxHeight(root->right);
        diam = max(diam, left + right);
        return max(left, right);
    }   
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        maxHeight(root);
        return diam;
    }
};
