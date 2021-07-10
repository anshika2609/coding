class Solution
{
    public:
    Node* segregate(Node *head)
    {
       Node *temp = head;
       int count[3]={0},i=0;
       while(temp!=NULL)
       {
           count[temp->data]++;
           temp = temp->next;
       }
       i=0;
       temp = head;
       while(temp!=NULL)
       {
           if(count[i]==0)
                ++i;
            else
            {
                temp->data = i;
                --count[i];
                temp = temp->next;
            }
       }
       return head;
    }
};