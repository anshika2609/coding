class Solution
{
    public:
    bool detectLoop(Node* head)
    {
       Node *p=head;
       Node *q=head;
       while(p && q && q->next)
       {
           p=p->next;
           q=q->next->next;
           if(p==q)
              return true;
       }
       
       return false;
    }
};