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
	ll n,i,q,p,z,f=0,e=0,w=0,g=0;
	cin>>n;
	string s;
	unordered_map<int,int>x;
	for(i=0;i<n;i++)
	{
		cin>>p;
		x[p]++;
	}
	cin>>q;
	while(q--)
	{
		cin>>s>>z;
		if(s=="+")
			x[z]++;
		else
			x[z]--;
		for(auto k:x)
		{
			if(k.second>=2)
				w++;
			if(k.second>=4)
				e++;
			if(k.second>=8)
				f++;
			if(k.second>=6)
				g++;
		}
		if((w>=2 && e>=1) || (w>=1 && g>=1) ||(e>=2) || (f>=1))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	x.clear();

	return 0;
}