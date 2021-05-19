
/* * * * * * * * * * * * * * 		
#                          *
#  @Author ANSHIKA AGRAWAL *
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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,ans=0,p;
		cin>>n>>m;
		ll arr[n+1];
		for(int i=0;i<=n;i++)
			arr[i]=1;
		for(int i=2;i<=n;i++)
		{
			p = m%i;
			ans+=arr[p];
			for(int j=p;j<=n;j+=i)
				arr[j]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}