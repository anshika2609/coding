
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
ll dfs(ll node,ll parent,ll hgt)
{
	cout<<node<<":"<<parent<<":"<<hgt<<endl;
	ll size=vv[node].size(),i,ans=hgt;
	for(i=0;i<size;i++)
	{
		if(vv[node][i]!=parent)
			ans=max(ans,dfs(vv[node][i],node,hgt+1));
	}
	return ans;
}
int main()
{	
	ll n,i,x,y,z=-1,m;
	cin>>n;
	for(i=1;i<n;i++)
	{
		cin>>x>>y;
		vv[x]._pb(y);
		vv[y]._pb(x);
	}
	cout<<dfs(5,0,1)<<endl;
	for(i=1;i<=n;i++)
	{
		//if(vv[i].size()==1)
		//	cout<<i<<" ";
		m=vv[i].size();
		z=max(z,m);
	}
	cout<<z<<endl;
	//for(i=0;i<vv[1].size();i++)
	//	cout<<vv[1][i]<<" ";
	//cout<<count<<endl;
	return 0;
}