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
	s(t);
	while(t--)
	{
		ll n,i;
		s(n);
		ll ans=0,vv[n+1];
		for(i=1;i<=n;i++)
			s(vv[i]);

		ll k=n;
		while(k>1 && vv[k]<=vv[k-1])
			--k;
		while(k>1 && vv[k]>=vv[k-1])
			--k;
		cout<<k-1<<endl;

		


	}
	return 0;
}