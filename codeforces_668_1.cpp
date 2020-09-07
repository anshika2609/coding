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
		ll n,i;
		cin>>n;
		ll arr[n+1];
		for(i=0;i<n;i++)
			cin>>arr[i];
		ll sum=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]>=0)
				sum+=arr[i];
			else
			{
				sum+=arr[i];
				if(sum<0)
					sum=0;

			}
		}
		cout<<sum<<endl;
	}
	return 0;
}