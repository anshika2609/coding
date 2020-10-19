
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

int isprime(ll n)
{
	if(n==1)
		return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{	

	ll n,i;
	cin>>n;
	if(isprime(n))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}