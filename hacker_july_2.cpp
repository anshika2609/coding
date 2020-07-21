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
bool isPrime(ll n,ll z=2) 
{ 
    if (n <= 2) 
        return (n == 2) ? true : false; 
    if (n % z == 0) 
        return false; 
    if (z * z > n) 
        return true; 
 
    return isPrime(n, z+1); 
}  
int main()
{	
	ll n,i,j,k,m,count;
	s(n);
	vector<ll> vv;
	ll arr[110]={0};
	arr[1]=0,arr[2]=1,arr[3]=1,arr[5]=1,arr[7]=1,arr[4]=2,arr[9]=2,arr[6]=3,arr[8]=4,arr[10]=2;

	for(i=11;i<=100;i++)
	{
		count=0;
		if(isPrime(i))
			arr[i]=0;
		else
		{
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					vv._pb(j);
					if(j>=10)
						++count;
				}
			}
			for(k=count;k<vv.size();k++)
			{
				arr[i]=arr[vv[k]]+arr[i];
			}
		}
		vv.clear();
	}
	cout<<arr[n]<<endl;
	


	return 0;
}