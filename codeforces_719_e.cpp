
/* * * * * * * * * * * * * * 		
#                          *
#  @Author ANSHIKA AGRAWAL *
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
	while(t--)
	{
		ll n,k=0,i;
		cin>>n;
		string str;
		vector<ll>vv;
		cin>>str;
		for(i=0;i<n;i++)
		{
			if(str[i]=='*'){
				vv.push_back(i);
				++k;
			}
		}
		ll med=k/2,temp=1,ans=0;
		for(i=0;i<med;i++)
		{
			ans+=vv[med]-vv[i]-temp;
			temp++;
		}
		temp=1;
		for(i=med+1;i<k;i++)
		{
			ans+=vv[i]-vv[med]-temp;
			temp++;
		}
		cout<<ans<<endl;
	}
	return 0;
}