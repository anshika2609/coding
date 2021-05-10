void leafsAtDistance(Node *root, vector<Node*> &path, int k, set<Node*> &ans)
{
    if(root==NULL)
        return;
        
    path.push_back(root);
    
    if(root->left==NULL && root->right==NULL)
    {
        int size = path.size();
        if(size-1-k>=0)
            {
                // cout<<root->data<<" "<<size-1-k<<"\n";
                ans.insert(path[size-1-k]);
            }
    } 
    else
    {
        leafsAtDistance(root->left, path, k, ans);
        leafsAtDistance(root->right, path, k, ans);
    }
    
    path.pop_back();
    return;
}

int printKDistantfromLeaf(Node* root, int k)
{
	vector<Node*> path;
	set<Node*> ans;
	leafsAtDistance(root, path, k, ans);
    return (int)ans.size();	
}