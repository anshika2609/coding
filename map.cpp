#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n+1];
    map<int,int>x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        x[a[i]]++;
    }
    int z=0,k;
    for(auto l:x)
    {
        if(l.second>z)
        {
            z=l.second;
            k=l.first;
        }
    }
    cout<<k<<endl;
    x.clear();
    return 0;
}
