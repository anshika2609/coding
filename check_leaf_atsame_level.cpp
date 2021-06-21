class Solution{
  public:
    /*You are required to complete this method*/
    int ans=0;
    void solve(Node* root,int height,int &m)
    {
        if(!root)
           return;

        if(ans == 0)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            if(m==-1)
                m= height;
            else
            {
                if(m!=height)
                    ans=0;
            }
           
        }
        solve(root->left,height+1,m);
        solve(root->right,height+1,m);
    }
    bool check(Node *root)
    {
       int m=-1;
       ans=1;
       int height = 0;
       solve(root,height,m);
       
       return ans;
    }