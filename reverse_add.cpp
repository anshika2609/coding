
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
ll rvers(ll num)
{
	ll rev = 0;
	while(num > 0)
	{
		rev = rev*10 + num%10;
		num = num/10;
	}
	return rev;
}
bool ispalindrome(ll num)
{
	return (rvers(num) == num);
}
int main()
{
	ll num,reversee_num=0;
	cin>>num;
	while(num <= 4294967295)
	{
		reversee_num = rvers(num);
		num = num + reversee_num;

		if(ispalindrome(num))
		{
			cout<<num<<endl;
			break;
		}
		else if(num>4294967295)
		{
			cout<<"no palindrome existss"<<endl;
		}
	}
	return 0;
}