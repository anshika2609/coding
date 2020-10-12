
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
		ll n,k,i,x,sum=0;
		cin>>n>>k;
		ll arr[n+1],j=0;
		for(i=0;i<n;i++)
			cin>>arr[i];

		for(i=0;i<n;i++)
		{
			if(arr[i]>=k)
			{
				j++;
				arr[i+1]=arr[i+1]+(arr[i]-k);
			}
			if(arr[i]<k)
				break;
			
		}
		if(i==n)
			j+=(arr[n-1]-k)/k;
		cout<<j+1<<endl;
	   
      }

	return 0;
}