class Solution
{
    public:
    //Function to reverse a linked list.
    Node *reverseTheList(Node *parent, Node *root)
    {
        if(root==NULL)
            return parent;
            
        Node *node = reverseTheList(root, root->next);
        root->next = parent;
        return node;
    }
    
    struct Node* reverseList(struct Node *head)
    {
        return reverseTheList(NULL, head);
    }
    
};