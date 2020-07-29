#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q,i;
    cin>>n>>k>>q;
    int arr[n+1],res[n+1];
    for(i=0;i<n;i++)
        cin>>arr[i];
    
    res[k-1]=arr[n-1];
    for(i=0;i<=n-2;i++)
    {
        int m=i+k;
        if(m>n-1)
            m = m-1-(n-1);
        
        res[m]=arr[i];
    }
    while(q--)
    {
        int x;
        cin>>x;
        cout<<res[x]<<endl;
    }
    return 0;
}
//// https://www.hackerrank.com/challenges/circular-array-rotation/problem /////