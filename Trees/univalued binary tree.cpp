class Solution {
public:
    map<int,int>mp;
    bool isUnivalTree(TreeNode* root) {
        int c=0,count=0;
       if(root){
           queue<TreeNode*>q;
           q.push(root);
           while(!q.empty()){
               TreeNode* temp=q.front();
               q.pop();
               mp[temp->val]++;
               if(temp->left)
                   q.push(temp->left);
               if(temp->right)
                   q.push(temp->right);
           } 
       
        if(mp.size()==1)
            return true;
           return false;
       }
        return true;
    }
};
