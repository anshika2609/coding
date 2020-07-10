#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--) 
    {
        int n;
        scanf("%d",&n);
        int m=4*n -1,i,z,k,p,q;
        map<int ,int> x1;
        map<int ,int> y1;
        for(i=0;i<m;i++)
        {
          scanf("%d%d",&z,&k);
          x1[z]++;
          y1[k]++;
         }
        for(auto &l : x1)
        {
           if((l.ss)%2==1)
           {
             p=l.ff;
             break;
           }
         }
      for(auto &l : y1)
      {
            if((l.ss)%2==1)
            {
              q=l.ff;
              break;
           }
    }
   printf("%d %d\n",p,q);
    }
    return 0;
}