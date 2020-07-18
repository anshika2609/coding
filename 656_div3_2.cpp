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
		ll n,i;
		s(n);
		ll arr[2*n+1],arr1[2*n+1]={0};

		for(i=1;i<=2*n;i++)
			s(arr[i]);
		for(i=1;i<=2*n;i++)
		{
			arr1[arr[i]]++;
			if(arr1[arr[i]] == 1)
				cout<<arr[i]<<" ";
		}
		cout<<endl;


	}
	return 0;
}