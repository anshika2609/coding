// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    void fact(Node* root,vector<int>&resultant)
    {
        resultant.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
                fact(root->children[i],resultant);
    }
    vector<int> preorder(Node* root)
    {
        vector<int>resultant;
        if(!root)
            return resultant;
            
        fact(root,resultant);
        return resultant;
                
    }
};