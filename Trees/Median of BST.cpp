/* Find median of BST */
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
