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
vector<ll>vv[1005];
bool vis[1005];
ll dis[1005];
void dfs(ll node,ll d)
{
	vis[node]=true;
	dis[node]=d;
	for(ll i=0;i<vv[node].size();i++)
	{
		ll child = vv[node][i];
		if(vis[child]==false)
		{
			dfs(child, dis[node]+1);
		}
	}
} 
int main()
{	
	ll n,i,a,b,q;
	s(n);
	for(i=0;i<n-1;i++)
	{
		cin>>a>>b;
		vv[a]._pb(b);
		vv[b]._pb(a);
	}

	dfs(1,0);
	ll ans=-1,p,min=1000000;
	s(q);
	while(q--)
	{
		cin>>p;
		if(dis[p]<min)
		{
			min=dis[p];
			ans=p;
		}
		else
		{
			if(dis[p]==min && p<ans)
				ans=p;
		}
	}
	cout<<ans<<endl;


	return 0;
}



///// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/?layout=old////////