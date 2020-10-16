
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
ll vis[10005];
void bfs(ll curr)
{
	queue<ll>q;
	q.push(curr);
	vis[curr]=1;
	while(!q.empty())
	{
		ll curr = q.front();
		cout<<curr<<" ";
		q.pop();

		for(ll i=0;i<vv[curr].size();i++)
		{
			ll child = vv[curr][i];
			if(vis[child]==0)
			{
				q.push(child);
				vis[child]=1;
			}

		}
	}
}
int main()
{	

	ll n,i,m,a,b;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		vv[a]._pb(b);
		vv[b]._pb(a);

	}
	bfs(1);
	

	return 0;
}