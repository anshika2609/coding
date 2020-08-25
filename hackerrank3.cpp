#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n;
    int arr[n+1],m=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m=max(m,arr[i]);
    }
    if(m>k)
        cout<<m-k<<endl;
    else
        cout<<0<<endl;

    
    return 0;
}