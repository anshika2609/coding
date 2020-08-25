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
	ll n,m,i,j;
	cin>>n>>m;
	ll a[n+1],b[m+1];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	ll ans=0,c;
	for(i=0;i<n;i++)
	{
		ll mm=9999999l;
		for(j=0;j<m;j++)
		{
			c=a[i]&b[j];
			cout<<c<<" ";
			mm=min(c,mm);
			cout<<mm<<endl;
		}
		ans=ans|mm;

	}
	cout<<ans<<endl;
	return 0;
}