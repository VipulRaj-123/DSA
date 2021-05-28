/* Find common nodes in BST */
/* Given two Binary Search Trees. Find the nodes that are common in both of them, ie- find the intersection of the two BSTs.

    Example 1:

     Input:
      BST1:
                                5
                             /     \
                           1        10
                         /   \      /
                        0     4    7
                                   \
                                     9
      BST2:
                                10 
                              /    \
                             7     20
                              /   \ 
                             4     9
    Output: 4 7 9 10

     Example 2:

     Input:
       BST1:
                              10
                             /  \
                            2   11
                             /  \
                            1   3
     BST2:
                              2
                             /  \
                            1    3
   Output: 1 2 3  */
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
