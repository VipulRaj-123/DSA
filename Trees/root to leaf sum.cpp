/* Print sum of all possible numbers that can be formed from all possible paths from to root to all leaf nodes */
int treepathsum(Node *root,int val){
if(root==NULL)
return 0;
val=(val*10+root->data);
if(root->left==NULL && root->right==NULL)
return val;
return treepathsum(root->left,val)+treepathsum(root->right,val);
}
                            
               /*   Example 1:

Input :      
           6                               
         /   \                          
        3     5                      
      /   \     \
     2    5      4             
        /  \                        
       7    4  

Output: 13997

Explanation :
There are 4 leaves, hence 4 root to leaf paths:
Path                      Number
6->3->2                   632
6->3->5->7                6357
6->3->5->4                6354
6->5>4                    654   
Answer = 632 + 6357 + 6354 + 654 = 13997 
Example 2:

Input :    
           10                               
         /   \                          
        20     30                      
      /   \     
     40       60    

Output :  2630

Explanation:
Path                      Number
10->20->40                1240
10->20->60                1260
10->30                    130
1240+1260+130 = 2630                 */
