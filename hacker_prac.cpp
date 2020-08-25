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
ll dis[100005];
ll vis[100005];
void bfs(ll node)
{
	queue<ll>q;
	memset(vis,0,sizeof(vis));
	q.push(node);
	dis[node]=0;
	vis[node]=true;
	while(!q.empty())
	{
		ll p=q.front();
		q.pop();
		for(ll i=0;i<vv[p].size();i++)
		{
			if(vis[vv[p][i]]==false)
			{

				q.push(vv[p][i]);
				dis[vv[p][i]]=dis[p]+1;
				vis[vv[p][i]]=true;
			}
		}
	}
}
int main()
{	
	ll t;
	s(t);
	while(t--)
	{
		ll n,m,x,y;
		s(n),s(m);
	
		while(m--)
		{
			cin>>x>>y;
			vv[x]._pb(y);
			vv[y]._pb(x);
		}

		bfs(1);
		cout<<dis[n]<<endl;
	}

	return 0;
}


/////// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/?layout=old////////