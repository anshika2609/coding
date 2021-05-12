<<<<<<< HEAD

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

ll power(ll x,unsigned int y, ll z)
{
	int ans=1;
	x = x%z;
	if(x==0)
		return 0;
	while(y>0)
	{
		if(y&1)
			ans = (ans*x)%z;

		y = y>>1;
		x = (x*x)%z;
	}
	return ans;
} 
int main()
{	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p=2,z=1000000007;
		cin>>n;
		cout<<power(p,n-1,z)<<endl;
		
	}
	return 0;
=======

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

ll power(ll x,unsigned int y, ll z)
{
	int ans=1;
	x = x%z;
	if(x==0)
		return 0;
	while(y>0)
	{
		if(y&1)
			ans = (ans*x)%z;

		y = y>>1;
		x = (x*x)%z;
	}
	return ans;
} 
int main()
{	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p=2,z=1000000007;
		cin>>n;
		cout<<power(p,n-1,z)<<endl;
		
	}
	return 0;
>>>>>>> 07894878720966ece46ab3bf6bc93b88848f5e20
}