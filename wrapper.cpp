<<<<<<< HEAD
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c,m,ans;
        cin>>n>>c>>m;
        ans=n/c;
        ll wra=ans;
        while(wra>=m)
        {
            ll z=wra/m;
            ans+=z;
            wra=(wra-(m*z))+z;
        }
        cout<<ans<<endl;
    }
    return 0;
}
///https://www.hackerrank.com/challenges/chocolate-feast/problem////
=======
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c,m,ans;
        cin>>n>>c>>m;
        ans=n/c;
        ll wra=ans;
        while(wra>=m)
        {
            ll z=wra/m;
            ans+=z;
            wra=(wra-(m*z))+z;
        }
        cout<<ans<<endl;
    }
    return 0;
}
///https://www.hackerrank.com/challenges/chocolate-feast/problem////
>>>>>>> 537f7fa3980f3e3ebaa18a1955219e4768c84883
