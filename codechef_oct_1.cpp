
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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		int p=0,z=x,i;
		for(i=0;i<10000;i++)
		{
			z=(z+k)%n;
			if(z==y)
			{
				p=1;
				cout<<"YES"<<endl;
				break;
			}
		}
		if(p==0)
			cout<<"NO"<<endl;

	}
	return 0;
}