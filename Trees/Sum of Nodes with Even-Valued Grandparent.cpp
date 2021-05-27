/* Sum of Nodes with Even-Valued Grandparent */
class Solution {
public:
    int sum=0;
    int sumEvenGrandparent(TreeNode* root) {
        if(!root)
            return 0;
        if(root->val % 2==0){
            if(root->left){
                if(root->left->left)
                    sum+=root->left->left->val;
                if(root->left->right)
                    sum+=root->left->right->val;
            }
            if(root->right){
                if(root->right->left)
                    sum+=root->right->left->val;
                if(root->right->right)
                    sum+=root->right->right->val;
            }
        }
        sumEvenGrandparent(root->left);
        sumEvenGrandparent(root->right);
        return sum;
    }
};
