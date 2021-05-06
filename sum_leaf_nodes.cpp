int sumLeaf(Node* root)
{
   if(!root)
        return 0;
   queue<Node*>q;
   q.push(root);
   int sum=0;
   while(!q.empty())
   {
       int size = q.size();
       while(size--)
       {
           Node* t = q.front();
           q.pop();
           if(t->left)
                q.push(t->left);
           if(t->right)
                q.push(t->right);
           if(t->left==NULL && t->right==NULL)
               sum+=t->data;
                
       }
   }
   return sum;
  
}