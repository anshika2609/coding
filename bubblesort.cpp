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
	ll n,i,temp;
	cin>>n;
	ll arr[n+1];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-1;i++)
	{
		for(ll j=0;j<n-i-1;j++)
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}