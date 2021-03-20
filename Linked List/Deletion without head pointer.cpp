// Delete without head pointer in O(1)
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       Node* copy=del->next;
       *del=*(del->next);
       free(copy);
    }

};
