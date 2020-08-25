<<<<<<< HEAD
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
		ll n,k,i,z=0;
		cin>>n>>k;
		ll w[n+1];
		for(i=0;i<n;i++)
		{
			cin>>w[i];
			if(w[i]>k)
				z++;
		}
		ll sum=0,j,count=0;
		if(z>=1)
			cout<<"-1"<<endl;
		else
		{	
			for(i=0;i<n;i++)
			{
				sum+=w[i];
				j=i;
				cout<<sum<<" ";
				if(sum>k)
				{
					sum=0;
					count++;
					i=j-1;
				}

			}
			cout<<count+1<<endl;
		}
	}
	return 0;
=======
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
		ll n,k,i,z=0;
		cin>>n>>k;
		ll w[n+1];
		for(i=0;i<n;i++)
		{
			cin>>w[i];
			if(w[i]>k)
				z++;
		}
		ll sum=0,j,count=0;
		if(z>=1)
			cout<<"-1"<<endl;
		else
		{	
			for(i=0;i<n;i++)
			{
				sum+=w[i];
				j=i;
				cout<<sum<<" ";
				if(sum>k)
				{
					sum=0;
					count++;
					i=j-1;
				}

			}
			cout<<count+1<<endl;
		}
	}
	return 0;
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
}