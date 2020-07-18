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

void mergesort(int arr[],int start,int end)
{
	if(start<end)
	{
		
	}
} 
int main()
{	
	ll n,i;
	cin>>n;
	ll arr[n+1];
	for(i=0;i<n;i++)
		cin>>arr[i];

	mergesort(arr,0,n-1);


	return 0;
}


/* merge sort is based upon divide and conquer, unsorted list is divide into n sublists, each having one element 
 12 8 24 17 33 71 10 48 4 21 6

 8 12   17 24    33 71    10 48    4 21    6

 8 12 17 24    10 33 48 71      4 6 21

 8 10 12 17 24 33 48 71        4 6 21

 4 8 10 12 17 21 24 33 48 71

 */
