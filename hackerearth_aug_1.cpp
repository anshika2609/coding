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
#define MAX 100000 
unsigned long long int multiply(ll x, ll res[], ll res_size) { 
	ll carry = 0; 
for (ll i = 0; i < res_size; i++) { 
    ll prod = res[i] * x + carry; 
    res[i] = prod % 10; 
    carry = prod / 10; 
} 
while (carry) { 
    res[res_size] = carry % 10; 
    carry = carry / 10; 
    res_size++; 
} 
return res_size; 
} 
unsigned long long int power(ll x, ll n)  
{ 
if(n == 0 )  
    return 1;
 
ll res[MAX]; 
ll res_size = 0; 
ll temp = x; 

while (temp != 0) { 
    res[res_size++] = temp % 10; 
    temp = temp / 10; 
} 
for (ll i = 2; i <= n; i++) 
    res_size = multiply(x, res, res_size); 

for (ll i = res_size - 1; i >= 0; i--) 
    return res[i];
} 

vector<ll>vv;
int main()
{	
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		unsigned long long int n,i,s=0;cin>>n;
		ll arr[40];
		memset(arr,0,sizeof arr);
		for(i=0;i<40;i++)
			arr[i]=pow(3,i);

		while(n!=0)
		{
			if(n%2==1)
				vv._pb(arr[s]);
			s++;
			n=n/2;
		}
		printf("%lld\n",vv.size());
		for(i=0;i<vv.size();i++)
			printf("%lld ",vv[i]);
		printf("\n");
		vv.clear();

	}
	return 0;
}