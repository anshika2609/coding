class Solution
{
    public:
   
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int> >q;
        if(!root)
            return ans;
        q.push({root,0});
        while(!q.empty())
        {
            Node* t = q.front().first;
            int h = q.front().second;
            q.pop();
            if(!mp[h])
                mp[h] = t->data;
            if(t->left)
                q.push({t->left,h-1});
            if(t->right)
                q.push({t->right,h+1});
        }
        for(auto x:mp)
            ans.push_back(x.second);
    
    return ans;
    }
    

};