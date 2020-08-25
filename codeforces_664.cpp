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
		ll even=0,odd=0,i,x,ans=0,ans1=0;
		for(i=0;i<4;i++)
		{
			cin>>x;
			if(x==0) 
				ans++;
			if(ans==3 && i==3)
				ans1++;
			if(x%2==0 && x>0)
				even++;
			if(x%2!=0 && x>0)
				odd++;

		}
		if((even==4 && odd==0 )||(even==3 && odd==1)|| (even==1 && odd==3) || (even==0 && odd==4))
			cout<<"YES"<<endl;
		else if(ans==4 || ans1==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}
	return 0;
}