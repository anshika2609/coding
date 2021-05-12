void QueueStack :: push(int x)
{
    while(!q1.empty())
    {
        int p = q1.front();
        q1.pop();
        q2.push(p);
    }
    q1.push(x);
    while(!q2.empty())
    {
        int p=q2.front();
        q2.pop();
        q1.push(p);
    }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
   if(q1.empty())
        return -1;
        
   int q= q1.front();
   q1.pop();
   return q;
   
}
