/* Determine if 2 treees are identical */
/* Concept :- Do level order traversal and compare the root node and the following left and right nodes. If they are not same return false else return true */
 bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if((r1==NULL&&r2)||(r1&&r2==NULL))
         return false;
        if((!r1)&&(!r2))
         return true;
        queue<Node*>q1;
        queue<Node*>q2;
        q1.push(r1);
        q2.push(r2);
        while((!q1.empty())&&(!q2.empty())){
            Node* temp1=q1.front();
            Node* temp2=q2.front();
            q1.pop();
            q2.pop();
            if(temp1->data != temp2->data)
             return false;
            if(temp1->left)
             q1.push(temp1->left);
            if(temp1->right)
             q1.push(temp1->right);
            if(temp2->left)
             q2.push(temp2->left);
            if(temp2->right)
             q2.push(temp2->right); 
        }
        if((!q1.empty())&&q2.empty())
         return false;
        if((!q2.empty())&&q1.empty())
         return false;
        return true;
    }
