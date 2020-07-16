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
vector< vector<ll> >vv(100005);
/*ll dfs(ll node,ll parent)
{
	ll size = vv[node].size();
	for(i=0;i<size;i++)
	{
		z=vv[node][i];
		ans+=arr[z];
	}
}*/
int main()
{	
	ll node,edges,i,x,z,y;
	cin>>node;
	ll arr[node+1],b[node+1];
	for(i=1;i<=node;i++)
	{
		cin>>x;
		arr[i]=x;
	}
	for(i=1;i<node;i++)
	{
		cin>>x>>y;
		vv[x]._pb(y);
		vv[y]._pb(x);
	}
	ll ans,j;
	for(i=1;i<=node;i++)
	{
		ans=0;
		ll size = vv[i].size();
		for(j=0;j<size;j++)
		{
			z=vv[i][j];
			ans+=arr[z];
		}
		b[i]=ans;
	}
	ll n,q;       
	cin>>q;
	while(q--)
	{
		
		cin>>n;
		cout<<b[n]+arr[n]<<endl;
	}

	return 0;
}