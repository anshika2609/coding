
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
		ll n,i,z,ans=0;
		cin>>n;
		ll arr[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>arr[i];
			arr[i] = arr[i]-i;
		}
		map<int,int>mp;
		for(i=1;i<=n;i++)
			mp[arr[i]]++;
		for(auto x:mp)
		{	
			z=x.second;
			ans+=(z*(z-1))/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}