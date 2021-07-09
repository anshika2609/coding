class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node *mid(Node *head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        Node *slow = head;
        Node *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node *reverse(Node *head)
    {
        if(head==NULL || head->next == NULL)
            return head;
        Node *prev = NULL;
        Node *curr = head;
        while(curr!=NULL)
        {
            Node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        Node *middle = mid(head);
        Node *new_head = middle->next;
        middle->next = NULL;
        Node *rev = reverse(new_head);
        while(head!=NULL && rev!=NULL)
        {
            if(head->data!= rev->data)
                return false;
            head=head->next;
            rev = rev->next;
        }
        return true;
    }
};