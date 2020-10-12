
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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i;
		cin>>n;
		ll a[n];
		for(i=1;i<=n;i++)
			a[i]=i;
		if(n==1)
			cout<<"1"<<endl;
		else if((n & (n-1))==0 )
			cout<<"-1"<<endl;
		else
		{
			a[1]=2;
			a[2]=3;
			a[3]=1;
			for(i=4;i<=n;i++)
			{
				if((i & (i-1))==0)
				{
					a[i]=i+1;
					a[i+1]=i;
					i=i+2;
				}
			}
			for(i=1;i<=n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}

	}
	return 0;
}