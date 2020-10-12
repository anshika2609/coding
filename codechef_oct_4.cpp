
/* * * * * * * * * * * * * * 		
#                          *
#  @Author  ANSHIKA AGRAWAL  *
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
		ll n,x,p,k,i;
		cin>>n>>x>>p>>k;
		ll arr[n+1];
		for(i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);

		if(arr[p-1] == x)
			cout<<"0"<<endl;

		else if(p<=k && arr[p-1]>=x)
		{
			ll ans=0;
			for(i=p-1;i>=0;i--)
			{
				if(arr[i]>x)
					++ans;
			}
			cout<<ans<<endl;
		}

		else if(k<=p && arr[p-1]<=x)
		{
			ll ans=0;
			for(i=p-1;i<n;i++)
			{
				if(arr[i]<x)
					++ans;
			}
			cout<<ans<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	return 0;
}