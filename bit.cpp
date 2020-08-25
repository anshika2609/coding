<<<<<<< HEAD
/* * * * * * * * * * * * * * 		
#                          *
# @Author  ANSHIKA AGRAWAL *
#                          *
# * * * * * * * * * * * * */
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define M(x) (x%MOD + MOD)%MOD
#define _pb push_back
#define _mp make_pair
#define ff first
#define ss second
#define s(x) scanf("%lld",&x)
 
ll mul(ll x,ll y)
{ ll ans=1;
 
  while(y>0)
  { if(y&1)
	ans=(ans*x)%MOD;
	y/=2;
	x=(x*x)%MOD;
  }
 
  return ans;
};
 
/******************************************************************************************************/
vector<ll>vv;
int main()
{	
    int n,i,k;
    cin>>n>>k;
    ll arr[n+1];
    for(i=0;i<n;i++)
    	cin>>arr[i];
    for(i=0;i<n;i++)
    {
    	if(arr[i]==k)
    		vv._pb(i);
    }
    for(i=0;i<vv.size();i++)
    	cout<<vv[i]+1<<" ";
    cout<<endl;

    return 0;
}
=======
/* * * * * * * * * * * * * * 		
#                          *
# @Author  ANSHIKA AGRAWAL *
#                          *
# * * * * * * * * * * * * */
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define M(x) (x%MOD + MOD)%MOD
#define _pb push_back
#define _mp make_pair
#define ff first
#define ss second
#define s(x) scanf("%lld",&x)
 
ll mul(ll x,ll y)
{ ll ans=1;
 
  while(y>0)
  { if(y&1)
	ans=(ans*x)%MOD;
	y/=2;
	x=(x*x)%MOD;
  }
 
  return ans;
};
 
/******************************************************************************************************/
 
int main()
{	
    int l,r,i,ans=0,j;
    cin>>l>>r;
    for(i=l;i<r;i++)
        for(j=i+1;j<=r;j++)
            ans=max(ans,i^j);

    cout<<ans<<endl;
    
    return 0;
}
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
/// https://www.hackerrank.com/challenges/maximizing-xor/problem