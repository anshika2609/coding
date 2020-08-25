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
vector<ll>vv[10005];
bool vis[10005];
ll dis[10005];
void dfs(ll node,ll d)
{
	vis[node]=true;
	dis[node]=d;
	for(ll i=0;i<vv[node].size();i++)
	{
		if(vis[vv[node][i]] == false)
		{
			dfs(vv[node][i],dis[node]+1);
		}
	}

}
int main()
{	
	ll n,a,b,q,x,m=10000000,ans=100000;
	s(n);
	while(n--)
	{
		cin>>a>>b;
		vv[a]._pb(b);
		vv[b]._pb(a);

	}
	dfs(1,0);
	cin>>q;
	while(q--)
	{
		cin>>x;
		if(dis[x]<m)
		{
			m=min(m,dis[x]);
			ans=min(ans,x);
		}

	}

	cout<<ans<<endl;

	return 0;
}