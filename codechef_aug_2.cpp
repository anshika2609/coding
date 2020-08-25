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
	ll t;
	cin>>t;
	map<ll,ll>mp;
	while(t--)
	{
		ll n,k,i,x;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(k%x==0)
				mp.insert({x,k/x});
		}
		if(mp.size()==0)
		    cout<<-1<<endl;
		else
		{
    		for(auto &y:mp)
    		{
    		    cout<<y.second<<endl;
    		    break;
    		}
		}
		 
		mp.clear();
		 
	}
	return 0;
}
