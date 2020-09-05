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
string convert_string(int n)
{
	if(n==0)
		return "0";
	
	string str = ""; 
  	while (n > 0) { 
    str+= (n % 10 - '0'); 
    n /= 10; 
  } 
	return str;
}
bool ispalindrome(string str)
{
	for(int i=0;i<str.size()/2;i++)
	{
		if(str[i]!=str[str.size()-i-1])
			return false;
		return true;
	}

}
int main()
{	
	int n;
	cin>>n;
	int next_n=n+1;
	while(ispalindrome(convert_string(next_n))!=1)
		next_n++;

	cout<<next_n<<endl;
	return 0;
}	