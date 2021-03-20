// Add 1 to a number as linked list
 Node* addOne(Node *head) 
    {
        struct Node *p;
struct Node *q=head;
while(q->next!=NULL)
{
q=q->next;
}
if(q->data!=9)
{
q->data++;
return head;
}
else
{
while(head!=q)
{
q->data=0;
p=head;
while(p->next!=q)
{
p=p->next;
}
if(p->data==9)
{
q=p;
}
else
{
p->data++;
return head;
}
}
head->data++;
return head;
}
}
