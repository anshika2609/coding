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
	int x,i;
	cin>>x;
	vector<ll>vv;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
			vv._pb(i);
	}
	if(vv.size()==1)
		cout<<1<<" "<<1<<endl;

	else if(vv.size()%2==0)
	{
		ll m=vv.size()/2;
		cout<<vv[m-1]<<" "<<vv[m]<<endl;
	}
	else
	{
		ll m=vv.size()/2;
		cout<<vv[m-1]<<" "<<vv[m+1]<<endl;
	}
	return 0;
}