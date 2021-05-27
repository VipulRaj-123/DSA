/* Find minimum difference between any 2 nodes in a BST */

/* Since it a BST so if we do the inorder traversal and push the nodes in a vector it will be sorted in an ascending order. then find difference between adjacent 
  elements. */
  
class Solution {
public:
    vector<int>v;
    vector<int>inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
        return v;
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int res=INT_MAX;
        for(int i=1;i<v.size();i++)
            res=min(res,v[i]-v[i-1]);
        return res;
    }
};
