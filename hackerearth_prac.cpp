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
vector<ll>vv[1000005];
ll vis[1000005];
ll cc[1000005]; 
ll curr_cc;
void dfs(ll node)
{
	vis[node]=1;
	cc[node]=curr_cc;
	for(ll i=0;i<vv[node].size();i++)
	{
		if(vis[vv[node][i]]==0)
			dfs(vv[node][i]);
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
		curr_cc=0;
		string ope;
		for(ll i=1;i<=n;i++)
        {
			vv[i].clear();
            vis[i]=0;
        }

		vector<pair<ll,ll> > diff;
		while(m--)
		{
			cin>>a>>ope>>b;
			if(ope == "=")
			{
				vv[a]._pb(b);
				vv[b]._pb(a);
			}
			else
				diff._pb({a,b});
		}
		for(ll i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				curr_cc++;
				dfs(i);
			}
		}
		bool flag = true;
		for(ll i=0;i<diff.size();i++)
		{
			a=diff[i].ff;
			b=diff[i].ss;
			if(cc[a]==cc[b])
			{
				flag=false;
				break;
			}

		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}
	return 0;
}

//// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/?layout=old ////////// 