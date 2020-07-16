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
		ll n,i,ans=0;
		s(n);
		ll arr[n+1];
		for(i=0;i<n;i++)
			s(arr[i]);
 
		for(i=1;i<n;i++)
		{
			if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
			{
				ll k=i;
				ans++;
				break;
			}
		}
		if(ans==1)
		{
			cout<<"YES"<<endl;
			cout<<i<<" "<<i+1<<" "<<i+2<<endl;
		}
		else
			cout<<"NO"<<endl;
 
	}
	return 0;
}