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
		ll n,i,j,q,rem;
		s(n);
		q=n/8;
		rem=n%8;
		char arr[8][8];
		for(i=0;i<8;i++)
			for(j=0;j<8;j++)
				arr[i][j]='X';

		for(i=0;i<q;i++)
		{
			for(j=0;j<8;j++)
			{
				arr[0][0]='O';
				arr[i][j]='.';
			}
		}
		if(rem>=1  )
		{
			for(i=0;i<rem;i++)
			{
				arr[q][i]='.';
				if(q==0)
					arr[0][0]='O';
			}
		}
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				cout<<arr[i][j];
			}
			cout<<endl;
		}


	}
		
	return 0;
}