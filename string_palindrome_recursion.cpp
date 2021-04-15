
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

bool ispalindrome(string str,int s,int n)
{
	if(s==n)
		return true;
	if(s>n)
		return true;

	if(str[s]!=str[n])
		return false;

	return ispalindrome(str,s+1,n-1);
}
int main()
{
	string str;
	cin>>str;
	int n=str.length();	

	bool ans = ispalindrome(str,0,n-1);
	if(ans == true)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;

	return 0;
}



/// string plaindrome 