 
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
	ll n;
	s(n);
	//ll ans = n & (n-1);
	ll k=0;
	if(!(n&(n-1)) && n>0)   // if((n&(n-1)==0) && n>0) is same
	{
		if(!(n & 0xaaaaaaaa))
			k=1;
	}
	if(k==1)
		cout<<"true "<<endl;
	else
		cout<<"false "<<endl;

	return 0;
}









