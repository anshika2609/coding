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
vector<int>vv(100005);
int main()
{	
	int n,i,counta=0,countb=0,p,s;
	cin>>n;
	string str;
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A')
		{
			vv._pb(i);
			++counta;
		}
		if(str[i]=='B')
		{
			vv._pb(i);
			++countb;
		}
	}
	if(str[vv[0]]=='A' && vv[0]>0)
			counta+=vv[0];

	for(i=1;i<vv.size();i++)
	{
		p=vv[i]-vv[i-1];
		s=p-1;
		if(p>1)
		{
			if(str[vv[i]]=='A' && str[vv[i-1]]=='A')
				counta+=(p-1);
			if(str[vv[i]]=='B' && str[vv[i-1]]=='B')
				countb+=(p-1);
			if(str[vv[i]]=='A' && str[vv[i-1]]=='B')
			{
				if(s>=2)
				{
					counta+=s/2;
					countb+=s/2;
				}
			}

		}

	}
	cout<<counta<<" "<<countb<<endl;
	if(counta>countb)
		cout<<"A"<<endl;
	else if(counta<countb)
		cout<<"B"<<endl;
	else
		cout<<"Coalition government"<<endl;

	return 0;
}