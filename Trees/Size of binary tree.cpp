/* size of binary tree= count number of nodes in a binary tree */
int getSize(Node* node)
{
   // Your code here
   queue<Node* >q;int count=0;
   if(node){
       q.push(node);
       count++;
       while(!q.empty()){
           Node* temp=q.front();
           q.pop();
           if(temp->left){
            q.push(temp->left);count++;}
           if(temp->right){
            q.push(temp->right);count++;}   
           }    
       }
   return count;
}
