
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
 
int main()
{	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,m,i,j;
		cin>>n;
		if(n==1)
			cout<<"1"<<endl;
		else if(n==2)
			cout<<"-1"<<endl;
		else
		{	k=1,m=2;
			if(n%2!=0)
			{
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
					{
						if(n*n<k)
						{
							cout<<m<<" ";
							m+=2;
						}
						else
						{
							cout<<k<<" ";
							k+=2;
						}
					}
					cout<<endl;
				}
			}
			else
			{
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
					{
						if(n*n<=k-1)
						{
							cout<<m<<" ";
							m+=2;
						}
						else
						{
							cout<<k<<" ";
							k+=2;
						}
					}
					cout<<endl;
				}
			}
		}
	}
	return 0;
}