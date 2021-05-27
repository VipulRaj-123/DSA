/* Sum of Nodes with Even-Valued Grandparent */

/*  Example 1:
https://assets.leetcode.com/uploads/2019/07/24/1473_ex1.png
  


Input: root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
Output: 18
Explanation: The red nodes are the nodes with even-value grandparent while the blue nodes are the even-value grandparents. */
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
