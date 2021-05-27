/* Maximum width of a binary tee */
class Solution
{
    public:
    //Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root)
    {
      int res=-1,level=0,pos=0;
      if(root){
          queue<Node*>q;
          q.push(root);
          while(!q.empty()){
              int n=q.size();
              level++;
              for(int i=1;i<=n;i++){
                  Node* temp=q.front();
                  q.pop();
                  if(temp->left)
                   q.push(temp->left);
                   if(temp->right)
                   q.push(temp->right);}
              
              if(n>res){
                  pos=level;
                  res=n;
              }
          }
          return res;
      }
    }
};

