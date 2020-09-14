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

		sort(arr,arr+n);
		ll x=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]>0)
				++x;
		}
		if(x==0)
		{
			ll p=1;
			for(i=0;i<5;i++)
				p*=arr[n-i-1];
			cout<<p<<endl;
			//continue;
		}
		else if(x==1 || x==2)
		{
			ll p=1;
			for(i=0;i<4;i++)
				p*=arr[i];
			p*=arr[n-1];
			cout<<p<<endl;
			//continue;
		}
		else if(x==3 || x==4)
		{
			ll p1=1,p2=1;
			for(i=0;i<4;i++)
				p1*=arr[i];
			p1*=arr[n-1];
			p2*=arr[0],p2*=arr[1];
			for(i=0;i<3;i++)
				p2*=arr[n-1-i];
			cout<<max(p1,p2)<<endl;
			//continue;
		}
		else if(x==5 || x>5)
		{
			ll p1=1,p2=1,p3=1;
			for(i=0;i<4;i++)
				p1*=arr[i];
			p1*=arr[n-1];
			p2*=arr[0],p2*=arr[1];
			for(i=0;i<3;i++)
				p2*=arr[n-1-i];
			for(i=0;i<5;i++)
				p3*=arr[n-1-i];

			cout<<max(p1,max(p2,p3))<<endl;
		//	continue;
		}
	}
	return 0;
}
