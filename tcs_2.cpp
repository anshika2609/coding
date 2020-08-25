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
	ll n,i;
	cin>>n;
	ll arr[n],k,j;
	double fact=1,gr=0;
	for(i=0;i<n;i++)
		cin>>arr[i];

	if(n==0){
		printf("%0.6f",float(n));
		return 0;
	}
	
	if(n==1){
		printf("%0.6f",float(n));
		return 0;
	}

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		for(j=1,k=1;j<=i;k*=++j)
			gr+=(fact/k);
	}

	if(n%2==0)
		gr--;

	gr-=n;
	printf("%0.6f",gr/fact);

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
	ll n,i;
	cin>>n;
	ll arr[n],k,j;
	double fact=1,gr=0;
	for(i=0;i<n;i++)
		cin>>arr[i];

	if(n==0){
		printf("%0.6f",float(n));
		return 0;
	}
	
	if(n==1){
		printf("%0.6f",float(n));
		return 0;
	}

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		for(j=1,k=1;j<=i;k*=++j)
			gr+=(fact/k);
	}

	if(n%2==0)
		gr--;

	gr-=n;
	printf("%0.6f",gr/fact);

	return 0;
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
}