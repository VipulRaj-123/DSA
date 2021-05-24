/* difference of sum of odd nodes and even nodes */

/* The approach is to do level order traversal and calculate sum of even nodes separately and return thier difference */

int getLevelDiff(Node *root)
    {
       //Your code here
       if(!root)
        return 0;
       queue<Node*>q;
       q.push(root);int level=0,even=0,odd=0;
       while(!q.empty()){
        int n=q.size();
        level+=1;
        for(int i=1;i<=n;i++){
            Node* temp=q.front();
            q.pop();
            if(level%2)
             odd+=temp->data;
            else
             even+=temp->data;
            if(temp->left)
             q.push(temp->left);
            if(temp->right)
             q.push(temp->right);
        }
       }
       return odd-even;
    }
