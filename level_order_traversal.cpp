class Solution
{
    public:
    vector<int> levelOrder(Node* node)
    {
      vector<int>ans;
      if(node==NULL)
            return ans;
      queue<Node*>q;
      q. push(node);
      while (! q. empty ())
      {
          Node* t = q. front ();
          ans. push_back(t->data);
          if(t->left)
                q. push(t->left);
          if(t->right)
                q.push(t->right);
          q.pop();
      }
      return ans;
    }
};
