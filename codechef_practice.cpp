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
vector<ll>vv[100005];
bool vis[100005];
ll cc_size;
void dfs(ll node)
{
	vis[node]=true;
	cc_size++;
	for(ll i=0;i<vv[node].size();i++)
	{
		if(vis[vv[node][i]]==false)
		{
			dfs(vv[node][i]);
		}
	}
} 
int main()
{	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,a,b;
		cin>>n>>m;
		for(ll i=1;i<=n;i++)
		{
			vis[i]=0;
			vv[i].clear();
		}
		while(m--)
		{
			cin>>a>>b;
			vv[a]._pb(b);
			vv[b]._pb(a);
		}

		ll ans=1;
		ll cc_count=0;
		for(ll i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				cc_size=0;
				dfs(i);
				cc_count++;
				ans=(ans*cc_size)%MOD;
			}
		}
		cout<<cc_count<<" "<<ans<<endl;
	//	vv.clear();
	}
	return 0;
}



////https://www.codechef.com/problems/FIRESC///