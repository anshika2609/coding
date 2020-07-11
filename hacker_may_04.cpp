 
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
ll sum1=0;
ll _div(ll n,ll k)
{
	ll sum = (n*(n+1))/2;
	ll z = n/k;
	ll w = (z*(z+1))/2;
	ll sum1=sum-(w*k);
	if(n>=k)
		return sum1+_div(n/k, k);
	else
		return sum1;
} 
int main()
{	
	ll t;
	s(t);
	while(t--)
	{
		ll n,k;
		s(n),s(k);
		cout<<_div(n,k)<<endl;
 
	}
	return 0;
}
Language: C++14