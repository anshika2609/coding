
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
vector< vector<ll> >vv(10005);
bool vis[10005];
ll dfs(ll node)
{
	vis[node]=1;
	for(ll i=0;i<vv[node].size();i++)
	{
		ll child=vv[node][i];
		if(vis[child]==0)
			dfs(child);
	}

}
int main()
{	
	ll n,i,x,y,m;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		vv[x]._pb(y);
		vv[y]._pb(x);
	}
	ll cc=0;
	for(i=1;i<=n;i++)
	{
		if(vis[i]==0){
			dfs(i);
			++cc;
		}
		dfs(i);
	}
	cout<<cc<<endl;
	return 0;
}