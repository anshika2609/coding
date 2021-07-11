class Solution
{
    public:
    void removeLoop(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        int flag=0;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast){
                flag = 1;
                break;
            }
        }
       if(flag==1)
       {
          fast = head;
          while(fast != slow)
          {
              fast = fast->next;
              slow = slow->next;
          }
         while(fast ->next != slow)
          {
              fast = fast->next;
          }
          fast ->next = NULL;
           }
    }
};