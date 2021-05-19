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
	ll n,i;
	cin>>n;
	ll arr[n+1];
	map<int,int>mp;
	multimap<int,int>mp2;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
	}
	for(auto x:mp)
		cout<<x.first<<" "<<x.second<<endl;

	for(auto x:mp)
		mp2.insert({x.second, x.first});

	cout<<"mp2"<<endl;
	
	for(auto x:mp2)
		cout<<x.first<<" "<<x.second<<endl;

	for(auto x:mp2)
	{
		x.first;
		while(p>0)
		{
			cout<<x.second<<" ";
			--x.first;
		}
	}
	
	return 0;
}