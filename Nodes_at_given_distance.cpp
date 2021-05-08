class Solution
{
private:

public:
    void findNodesAtDistance(Node *root, int k, vector<int> &finNodes)
    {
        if(root==NULL)
            return;
            
        if(k==0)
        {
            finNodes.push_back(root->data);
            return;
        }
        
        findNodesAtDistance(root->left, k-1, finNodes);
        findNodesAtDistance(root->right, k-1, finNodes);

        return;        
    }
    
    int targetDistance(Node *root, int target, int k, vector<int> &finNodes)
    {
        if(root==NULL)
            return -1;
        
        if(root->data==target)
        {
            findNodesAtDistance(root, k, finNodes);
            return 0;
        }
        
        int left = targetDistance(root->left, target, k, finNodes);
        int right = targetDistance(root->right, target, k, finNodes);
        
        if(left!=-1)
        {
            ++left;
            if(left==k)
                finNodes.push_back(root->data);
            else if(left<k)
                findNodesAtDistance(root->right, k-left-1, finNodes);
            return left;
        }
        
        if(right!=-1)
        {
            ++right;
            if(right==k)
                finNodes.push_back(root->data);
            else if(right<k)
                findNodesAtDistance(root->left, k-right-1, finNodes);
            return right;
        }
        
        return -1;
    }
    
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        vector<int> finNodes;
        targetDistance(root, target, k, finNodes);
        sort(finNodes.begin(), finNodes.end());
        return finNodes;
    }
};