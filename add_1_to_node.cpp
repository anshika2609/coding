Node* add(Node* head)
{
    if(head == NULL)
        return new Node(1);
    
    Node* carry = add(head->next);
    int temp = head->data;
    head->data = (head->data + carry->data)%10;
    carry->data = (temp + carry->data)/10;
    return carry;
}
class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node* carry = add(head);
        if(carry->data!=0)
        {
            carry->next = head ;
            head = carry ; 
        }
        return head;
    }
};