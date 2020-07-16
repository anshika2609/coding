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
		ll n,x,i,z=0,k=0;
		s(n),s(x);
		ll arr[n+1];
		for(i=0;i<n;i++)
			s(arr[i]);

		sort(arr,arr+n);

		for(i=n-1;i>=0;i--)
		{
			z++;
			if(arr[i]*z >= x)
			{
				++k;
				z=0;
			}
		}
		cout<<k<<endl;

	}
	return 0;
}