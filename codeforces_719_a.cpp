
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
		ll n,z=0;
		cin>>n;
		string str,str1="";
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]!=str[i+1])
				str1.push_back(str[i]);
		}
		map<int,int>mp;
		for(int i=0;i<str1.length();i++)
			mp[str1[i]]++;
		for(auto x:mp)
		{
			if(x.second>1)
			{
				++z;
				break;
			}
		}
		if(z==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
	return 0;
}