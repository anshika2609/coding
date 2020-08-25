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
		ll n,m,i,j;
		cin>>n>>m;
		ll ans=0;
		char a[n+1][m+1];
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				cin>>a[i][j];

		for(j=1;j<m;j++)
		{
			if(a[n][j]=='D')
				ans++;
		}
		for(i=1;i<=n;i++)
		{
			if(a[i][m]=='R')
				ans++;
		}
		cout<<ans<<endl;
		

	}
	return 0;
}