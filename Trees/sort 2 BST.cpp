/* Sort 2 BST in ascending order */
void inorder(TreeNode* root, vector<int>& res)
    {
        if(root == NULL)
          return;
        
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        inorder(root1,res);
        inorder(root2,res);
        sort(res.begin(),res.end());
        return res;
    }
