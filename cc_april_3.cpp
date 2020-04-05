 
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
 
int main()
{	
	ll t;
	s(t);
	while(t--)
	{
		ll x,k,i;
		s(x),s(k);
		vector<ll>v;
		while(x%2==0)
		{
			v._pb(2);
			x/=2;
		}
		for(i=3;i<=sqrt(x);i=i+2)
		{
			while (x%i == 0)  
       		{  
            	v._pb(i); 
           		x= x/i;  
        	}  
		}
		if(x>2)
			v._pb(x);

		if(v.size()>=k)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;


	}
	return 0;
}