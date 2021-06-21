class Solution {
  public:
    int solve(Node* root)
    {
        if(!root)
            return 0;
        int a = solve(root->left);
        int b = solve(root->right);
        int x = root->data;
        root->data = a + b;
        return a+b+x;
        
    }    
    void toSumTree(Node *node)
    {
        solve(node);
    }
};