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
		ll n,x,i;
		cin>>n;
		ll f[102]={0},b=-1,c=-1;
		for(i=0;i<n;i++)
		{
			cin>>x;
			++f[x];
		}
		for(i=0;i<102;i++)
		{
			if(f[i]>0)
				f[i]--;

			else
			{
				b=i;
				break;
			}
		}
		for(i=0;i<102;i++)
		{
			if(f[i]>0)
				f[i]--;
			else
			{
				c=i;
				break;
			}
		}
		cout<<b+c<<endl;



	}
		return 0;
}