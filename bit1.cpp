#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ans=ans^x;
    }
    cout<<ans<<endl;
    return 0;
}


/////https://www.hackerrank.com/challenges/lonely-integer/problem