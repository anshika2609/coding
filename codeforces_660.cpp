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
		ll n;
		s(n);
		if(n<=30)
			cout<<"NO"<<endl;
		else if(n==40)
		{
			cout<<"YES"<<endl;
			cout<<10<<" "<<15<<" "<<6<<" "<<9<<endl;
		}
		else if(n==36)
		{
			cout<<"YES"<<endl;
			cout<<10<<" "<<15<<" "<<6<<" "<<5<<endl;
		}
		else if(n==44)
		{
			cout<<"YES"<<endl;
			cout<<10<<" "<<6<<" "<<7<<" "<<21<<endl;
		}

		else
		{
			cout<<"YES"<<endl;
			cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
		}
	}
	return 0;
}