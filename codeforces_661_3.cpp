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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n;
		ll cnt[100]={0};
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			++cnt[x];
		}
		ll ans=0;
		for(ll i=2;i<=100;i++)
		{
			ll count=0;
			for(ll j=1;j<=(i-1)/2;j++)
				count+=min(cnt[j],cnt[i-j]);

			if(i%2==0)
				count+=cnt[i/2]/2;

			ans=max(ans,count);
		}
		cout<<ans<<"\n";
	}
	return 0;
}