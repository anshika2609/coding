/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    ListNode* iscycle(ListNode *head) {
        if (!head) return NULL;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
                return slow;
        }
        
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) 
    {
        if(!head)
          return NULL;
        ListNode *s = iscycle(head);
        while(s!=NULL && head!=NULL)
        {
                if(s==head)
                    return s;
                s=s->next;
                head=head->next;
                
        }
         return NULL;
    }
    
};