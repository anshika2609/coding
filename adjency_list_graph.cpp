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
 
int main()
{	
	ll node,edges,x,y,i,j;
	s(node);
	s(edges);
	vector<ll>adj[node+1];

	for(i=0;i<edges;i++)
	{
		cin>>x>>y;
		adj[x]._pb(y);
	}
	for(i=1;i<=node;i++)
	{
		cout<<"adjancy list of node"<<i<<":";
		for(j=0;j<adj[i].size();j++)
		{
			if(j==adj[i].size()-1)
				cout<<adj[i][j]<<endl;
			else
				cout<<adj[i][j]<<"-->";

		}

	}

	return 0;
}