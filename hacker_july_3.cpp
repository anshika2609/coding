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
 ll lcm(ll a, ll b)  
 {  
    return (a*b)/__gcd(a, b);  
 }   
int main()
{	
	ll t;
	s(t);
	while(t--)
	{
		ll n,m,k,i;
		s(n),s(m),s(k);
		k=k%10;
		ll arr[n+1],result;
		for(i=0;i<n;i++)
		{
			s(arr[i]);
			arr[i]=pow(arr[i]%10,k);
		}
	
		result = arr[0];
		for(i=1;i<n;i++)
		{
			result = lcm(result,arr[i]);
		}

		cout<<result%m<<endl;




	}
	return 0;
}