/* Find common nodes in BST */
vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     vector<int>v;
     set<int>s;
     queue<Node*>q1;
     queue<Node*>q2;
     q1.push(root1);
     q2.push(root2);
     while(!q1.empty()){
         Node* temp=q1.front();
         q1.pop();
         s.insert(temp->data);
         if(temp->left)
          q1.push(temp->left);
         if(temp->right)
          q1.push(temp->right);
     }
     while(!q2.empty()){
         Node* temp=q2.front();
         q2.pop();
         if(s.find(temp->data)!=s.end())
          v.push_back(temp->data);
          if(temp->left)
           q2.push(temp->left);
          if(temp->right)
           q2.push(temp->right);
     }
     sort(v.begin(),v.end());
     return v;
    }
