class Solution{
    public:
    //Function to convert a binary tree into its mirror tree.
    void mirror(Node* node)
    {
        if(!node)
            return;
        else
        {
            struct Node* temp; 
                mirror(node->left);
                mirror(node->right);
           
                temp        = node-> left;
                node->left = node-> right;
                node->right = temp;
                    
            
        }
    }
};