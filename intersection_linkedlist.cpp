/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int count1=0,count2=0;
        ListNode *p=headA,*q=headB;
        while(p != NULL)
        {
                count1++;
                p = p->next;
        }
        while(q != NULL)
        {
                count2++;
                q = q->next;
        }
        int d= abs(count1-count2);
        while(d!=0){
        if(count1>count2)
           headA = headA->next;
        if(count1<count2)
           headB = headB->next;
        d--;
        }
         
         while(headA != headB)
         {
                 headA=headA->next;
                 headB=headB->next;
         }
         if(headA!=NULL && headB!=NULL)
                 return headA;
         else
             return NULL;
    }
};