
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
	int i,n;
	cin>>n;
	int a[n+1];
	for(i=0;i<n;i++)
		cin>>a[i];
	int c_0=0, c_1=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                c_0++;
            if(a[i]==1)
                c_1++;
        }
        for(i=0;i<c_0;i++)
            cout<<"0"<<" ";
        for(i=0;i<c_1;i++)
            cout<<"1"<<" ";
        for(i=0;i<n-(c_0+c_1);i++)
            cout<<"2"<<" ";
    
	return 0;
}