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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,ans=0,z,p;
		cin>>n;
		ll m=10000000000;
		ll k=10000000000;
		ll a[n+1],b[n+1];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			m=min(m,a[i]);
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			k=min(k,b[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>m && b[i]>k)
			{
				z=a[i]-m;
				p=b[i]-k;
				ans+=min(z,p);
				a[i]=a[i]-min(z,p);
				b[i]=b[i]-min(z,p);
			}
		}

		for(i=0;i<n;i++)
		{
			if(a[i]>m)
				ans+=a[i]-m;
			
		}
		for(i=0;i<n;i++)
		{
			if(b[i]>k)
				ans+=b[i]-k;
		}

		cout<<ans<<endl;
	}
	return 0;
}