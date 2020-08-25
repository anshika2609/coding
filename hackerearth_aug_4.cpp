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
vector<ll>vv;
int main()
{	
	ll n,i,q,v,u,w,x;
	scanf("%lld",&n);
	ll a[n+1];
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	scanf("%lld",&q);
	while(q--)
	{
		scanf("%lld",&q);
		if(u!=3)
			scanf("%lld,%lld,%lld",&v,&w,&x);
		else
			scanf("%lld",&v);
		if(u==1)
		{
			for(i=v-1;i<w;i++)
				a[i]+=x;
		}
		else if(u==2)
		{
			for(i=v-1;i<w;i++)
				a[i]*=x;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==v)
					vv._pb(i+1);
			}
			if(vv.empty())
				printf("-1\n");
			else{
				ll z=vv[vv.size()-1]-vv[0]+1;
				printf("%lld",z);
			}
		}
		vv.clear();
	}

	return 0;
}

// 2 3 4 5 4 5 4 
