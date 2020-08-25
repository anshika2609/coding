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
		ll a1,a2,a3,b1,b2,b3;
		cin>>a1>>a2>>a3;
		cin>>b1>>b2>>b3;
		ll sum=0;
		ll z=min(b2,a3);
		b2-=z;
		a3-=z;
		sum+=z*2;
		 z= min(a2,b1);
		a2-=z;
		b1-=z;
		z=min(a3,b1);
		a3-=z;
		b1-=z;

		sum-=2*min(a2,b3);

		cout<<sum<<endl;

	}
	return 0;
}