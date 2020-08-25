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
ll vis[100005];
ll level[100005];
ll dis[100005];
void bfs(ll node)
{
	queue<ll>q;
	memset(vis,0,sizeof(vis));
	memset(level,0,sizeof(level));
	q.push(node);
	vis[node]=1;
	dis[node]=0;
	while(!q.empty())
	{
		ll p=q.front();
		q.pop();
		for(ll i=0;i<vv[p].size();i++)
		{
			if(vis[vv[p][i]]==0)
			{
				dis[vv[p][i]]=dis[p]+1;
				q.push(vv[p][i]);
				vis[vv[p][i]]=1;
				level[dis[vv[p][i]]]++;
			}
		}
	}
}
int main()
{	
	ll n,e,q;
	cin>>n>>e;
	while(e--)
	{
		ll a,b;
		cin>>a>>b;
		vv[a]._pb(b);
		vv[b]._pb(a);
	}
	cin>>q;
	while(q--)
	{
		ll src,d;
		cin>>src>>d;
		bfs(src);
		cout<<level[d]<<endl;
	}

	return 0;
}


////https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/?layout=old/////////