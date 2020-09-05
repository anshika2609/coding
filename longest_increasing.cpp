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
int lis(int *input,int n)
{
	int *output = new int[n];
	output[0]=1;
	for(int i=1;i<n;i++)
	{
		output[i]=1;
		for(int j=i-1;j>=0;j--)
		{
			if(input[j]>input[i]){
				continue;
			}
			int possible_ans = output[j]+1;
			if(possible_ans>output[i])
				output[i]=possible_ans;
			
		}
	}
	int best=0;
	for(int i=0;i<n;i++)
	{
		if(best<output[i])
			best=output[i];
	}
	delete [] output;
	return best;
} 

int main()
{	
	int n;
	cin>>n;
	int *input = new int[n];
	for(int i=0;i<n;i++)
		cin>>input[i];

	int ans = lis(input, n);
	cout<<ans<<endl;
	delete [] input;
	return 0;
}