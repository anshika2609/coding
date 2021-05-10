class Solution {
public:
    int result;
    int maxLevelSum(TreeNode* root) 
    {
        if(root == NULL )
           return 0;
        queue<TreeNode*>q;
        vector<int>vv;
        q.push(root);
        while(!q.empty())
        {
           int size = q.size();
           int sum = 0;
           while(size--)
           {
              TreeNode* t=q.front(); 
              q.pop();
              sum = sum + t->val;
              if(t->left)
                    q.push(t->left);
               if(t->right)
                   q.push(t->right);
                   
           }
           
           vv.push_back(sum);          
           result = *max_element(vv.begin(),vv.end());
        }
        int ans;
        for(int i=0;i<vv.size();i++)
        {
           if(vv[i] == result)
           {
                ans=i;
                break;
            }
        } 
        return ans+1;
    }
};