#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    ll arr[n+1];
    for(i=0;i<n;i++)
        cin>>arr[i];
    ll d,m;
    cin>>d>>m;
    ll count=0;
    for(i=0;i<n-m+1;i++)
    {
        ll a=0;
        for(ll j=i;j<i+m;j++)
            a+=arr[j];
        if(a==d)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
