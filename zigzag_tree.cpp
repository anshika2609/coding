vector <int> zigZagTraversal(Node* root)
{
    vector<int>ans;
    if(!root)
        return ans;
    int flag = 1;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size(),i;
        vector<int>temp;
        while(size--)
        {
            Node* t = q.front();
            temp.push_back(t->data);
            q.pop();
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }
        if(flag%2==0)
            reverse(temp.begin(),temp.end());
        flag=!flag;
        for(i=0;i<temp.size();i++)
            ans.push_back(temp[i]);
    }
        return ans;
}