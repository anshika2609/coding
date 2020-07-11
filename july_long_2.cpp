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
		ll n,x,y,i;
		s(n);
		ll a1=0,b1=0;
		for(i=0;i<n;i++)
		{

			cin>>x>>y;
			ll a=0,b=0;
			while(x!=0)
			{
				a+=x%10;
				x=x/10;
			}
			while(y!=0)
			{
				b+=y%10;
				y=y/10;
			}
			if(a>b)
				a1++;
			else if(b>a)
				b1++;
			else
			{
				a1++;
				b1++;
			}
		}
		
		if(a1>b1)
			cout<<0<<" "<<a1<<endl;
		else if(b1>a1)
			cout<<1<<" "<<b1<<endl;
		else
			cout<<2<<" "<<b1<<endl;
	}
	return 0;
}