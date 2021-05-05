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
		s(n);*************
		if(n%2==0)
		{
			for(i=1;i<=n;i+=2)
			{
				cout<<i<<" "<<i<<" ";
			}
			cout<<endl;
		}
		else
		{
			n=n-1;
			for(i=1;i<=n;i+=2)
				cout<<i<<" "<<i<<" ";
			cout<<i<<endl;
		}


	}
	return 0;
}

/////// https://codeforces.com/contest/1372/problem/A //////