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
	while(t--)
	{
		ll j=0,k=0;
		string str,str1;
		cin>>str;
		str1=str;
		ll n=str.length(); 
	    for (ll i = 0; i < n / 2; i++) 
	        swap(str[i], str[n - i - 1]); 

	    if(str==str1)
	    	cout<<-1<<endl;
		else
		{
			sort(str1.begin(),str1.end());
			cout<<str1<<endl;

		}
	}
	return 0;
}