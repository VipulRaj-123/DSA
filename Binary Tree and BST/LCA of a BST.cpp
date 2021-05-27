/* Lowest Common Ancestor of a BST */
/* Iterative method */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  TreeNode* temp=root;
        while(1){
  if(temp->val>p->val&&temp->val>q->val)
      temp=temp->left;
  else if(temp->val<p->val&&temp->val<q->val)
      temp=temp->right;
  else
      break;}
        return temp;
    }
};
