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

bool vis[100005];
vector<ll>vv[100005];
void dfs(ll node)
{
	vis[node]=true;
	for(ll i=0;i<vv[node].size();i++)
	{
		ll child = vv[node][i];
		if(vis[child]==false)
			dfs(child);
	}
} 
int main()
{	
	ll n,e,i,a,b;
	s(n),s(e);
//	vector<ll>vv[n+1];
	while(e--)
	{
		cin>>a>>b;
		vv[a]._pb(b);
		vv[b]._pb(a);
	}
	memset(vis,false,sizeof(vis));
	ll cc_count =0;
	for(i=1;i<=n;i++)
	{
		if(vis[i]==false)
		{
			dfs(i);
			cc_count++;
		//	cout<<cc_count<<endl;
		}
	}


	cout<<cc_count<<endl;

	return 0;
}