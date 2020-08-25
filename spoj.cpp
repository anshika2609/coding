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
ll dis[100005];
ll vis[100005];
vector<ll>primes;
bool isprime(int n) 
{ 
	ll c=0;
    for(ll i=2;i*i<=n;i++)
    {
	    if(n%i==0) 
	    	c==1;
	 }
	 if(c==1)
	 	return false;
	 else
		return true;
} 
bool isvalid(ll a,ll b)
{
	ll count=0;
	while(a>0)
	{
		if(a%10 != b%10) count++;
		a=a/10,b=b/10;
	}
	if(count==1)
		return true;
	else
		return false;
}
void buildgraph()
{
	for(ll i=1000;i<=9999;i++)
	{
		if(isprime(i))
			primes._pb(i);
	}
	for(ll i=0;i<primes.size();i++)
	{
		for(ll j=i+1;j<primes.size();i++)
		{
			ll a=primes[i];
			ll b=primes[j];
			if(isvalid(a,b))
			{
				vv[a]._pb(b);
				vv[b]._pb(a);
			}
		}
	}
}
void bfs(ll node)
{
	queue<ll>q;
	memset(vis,0,sizeof(vis));
	q.push(node);
	dis[node]=0;
	vis[node]=1;
	while(!q.empty())
	{
		ll p=q.front();
		q.pop();
		for(ll i=0;i<vv[p].size();i++)
		{
			if(vis[vv[p][i]]==false)
			{
				vis[vv[p][i]]=true;
				dis[vv[p][i]]=dis[p]+1;
				q.push(vv[p][i]);
			}
		}
	}
}
int main()
{	
	ll t,a,b;
	cin>>t;
	buildgraph();
	while(t--)
	{
		cin>>a>>b;
		for(ll i=1000;i<=9999;i++)
			dis[i]=-1;
		bfs(a);
		if(dis[b]==-1)
			cout<<"Impossible"<<endl;
		else
			cout<<dis[b]<<endl;

	}
	return 0;
}