/* Print sum of all possible numbers that can be formed from all possible paths from to root to all leaf nodes */
int treepathsum(Node *root,int val){
if(root==NULL)
return 0;
val=(val*10+root->data);
if(root->left==NULL && root->right==NULL)
return val;
return treepathsum(root->left,val)+treepathsum(root->right,val);
}
                            
