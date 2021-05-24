/* Return minimum element in BST */
/* Explanation :- Since the minimum will occur in left subtree we have to search the leftest leaf node otherwise if root->LEFT==NULL
  ROOT will be minimum */
  int minValue(Node* root)
{
    // Code here
    if(root->left==NULL)
     return root->data;
    minValue(root->left); 
}
