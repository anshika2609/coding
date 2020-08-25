#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll fact(ll n) 
{ 
    if (n == 0) 
        return 1; 
    return n * fact(n - 1); 
} 
  
int main()
{
 ll n,i,s,p,q;
 scanf("%d",&n);
 ll arr[n+1]; 
 q=n;
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 s=fact(n);
 if(q%2==0)
   p=s+s+2;
 else
   p=s+s-2;
 
  
 printf("%0.6f",p/s);
  
  return 0;
}