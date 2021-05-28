/* Find median of BST */
/* Example 1:

Input:
       6
     /   \
   3      8   
 /  \    /  \
1    4  7    9
Output: 6
Explanation: Inorder of Given BST will be:
1, 3, 4, 6, 7, 8, 9. So, here median will 6.

Example 2:

Input:
       6
     /   \
   3      8   
 /   \    /   
1    4   7   
Output: 5
Explanation:Inorder of Given BST will be:
1, 3, 4, 6, 7, 8. So, here median will
(4 + 6)/2 = 10/2 = 5.      */

void inorder(Node* root,vector<int>&v){
    if(!root)
     return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
float findMedian(struct Node *root)
{
      //Code here
      vector<int>v;
      inorder(root,v);
      if(v.size()%2)
       return v[v.size()/2];
      float sum=((float)v[v.size()/2-1]+(float)v[v.size()/2])/2;
      return sum;
}
