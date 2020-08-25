<<<<<<< HEAD
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
		ll pc,pr;
		cin>>pc>>pr;
		ll c=pc%9,d=pr%9,c1,d1;
		if(c==0)
			c1=pc/9;
		if(c>0)
			c1=pc/9 + 1;

		if(d==0)
			d1=pr/9;
		if(d>0)
			d1=pr/9 + 1;

	//	cout<<c<<" "<<d<<" "<<c1<<" "<<d1<<endl;

		if(c1>=d1)
			cout<<1<<" "<<d1<<endl;
		else 
			cout<<0<<" "<<c1<<endl;



	}
	return 0;
=======
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
		ll pc,pr;
		cin>>pc>>pr;
		ll c=pc%9,d=pr%9,c1,d1;
		if(c==0)
			c1=pc/9;
		if(c>0)
			c1=pc/9 + 1;

		if(d==0)
			d1=pr/9;
		if(d>0)
			d1=pr/9 + 1;

	//	cout<<c<<" "<<d<<" "<<c1<<" "<<d1<<endl;

		if(c1>=d1)
			cout<<1<<" "<<d1<<endl;
		else 
			cout<<0<<" "<<c1<<endl;



	}
	return 0;
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
}