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
bool vis[100005]; 
ll ans[100005];
void bfs1(ll node) 
{ 
	queue<pair<ll,ll> > qu; 
	qu.push({ node, 0 }); 

	while (!qu.empty()) { 
		pair<ll,ll> p = qu.front(); 
		qu.pop(); 
		ans[p.first] = p.second; 
		vis[p.first] = true; 
		for (ll child : vv[p.first]) { 
			if (!vis[child]) { 
				qu.push({ child, p.first }); 
			} 
		} 
	} 
} 
ll bfs(ll n,ll arr[],ll ans[])
{
	queue<ll>q;
	bool vis[100005]={false};
	ll ans1=0;
	ll i,z;
	q.push(n);
	vis[n]=true;
	while(!q.empty())
	{
		ll p=q.front();
		q.pop();

		for(i=0;i<vv[p].size();i++)
		{
			if(vis[vv[p][i]] == false && ans[p]!=vv[p][i])
			{
				q.push(vv[p][i]);
				vis[vv[p][i]]= true;
				z=vv[p][i];
				ans1+=arr[z];
			}
		}
	}
	return ans1+arr[n];

}
int main()
{	
	ll nodes,q1,x,y,i,n;
	cin>>nodes;
	ll arr[nodes+1],b[nodes+1];
	for(i=1;i<=nodes;i++)
		cin>>arr[i];
	for(i=1;i<nodes;i++)
	{
		cin>>x>>y;
		vv[x]._pb(y);
		vv[y]._pb(x);
	}
	bfs1(1);
	ll c[100005];
	for(i=1;i<=n;i++)
		c[i]=bfs(i,arr,ans);
	cin>>q1;
	while(q1--)
	{
		cin>>n;
		cout<<c[n]<<endl;
	}

	return 0;
}