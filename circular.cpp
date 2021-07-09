bool isCircular(struct Node *head)
{
    if(!head)
        return true;
    struct Node *temp= head->next;
    while(temp!=NULL && temp!=head)
        temp = temp->next;
    if(temp==head)
        return true;
    return false;
}
