class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node)
    {
        if(!node)
            return 0;
        int x = height(node->left);
        int y = height(node->right);
        return max(x,y)+1;
        
    }
};