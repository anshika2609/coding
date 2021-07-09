 int top = 1,down = r,left = 1,right = c,dir=0;
    while(top<=down && left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
                cout<<matrix[top][i]<<" ";
            top=top+1;
        }
        if(dir==1)
        {
            for(int i=top;i<=down;i++)
                cout<<matrix[i][right]<<" ";
            right=right-1;
        }
        if(dir==2)
        {
            for(int i=right;i>=left;i--)
                cout<<matrix[down][i];
            down=down-1;
        }
        if(dir==3)
        {
            for(int i=down;i>=top;i--)
                cout<<matrix[i][left]<<" ";
            left=left+1;
        }
        dir = (dir+1)%4;
    }
    return matrix;