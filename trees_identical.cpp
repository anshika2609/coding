<<<<<<< HEAD
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL && r2==NULL)
            return 1;
        if(r1!=NULL && r2!=NULL)
        {
            if(r1->data == r2->data && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right))
                return 1;
        }
        return 0;
    }
=======
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL && r2==NULL)
            return 1;
        if(r1!=NULL && r2!=NULL)
        {
            if(r1->data == r2->data && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right))
                return 1;
        }
        return 0;
    }
>>>>>>> 531ac8202d3a02151b3626d3b4042587e2658ad3
};