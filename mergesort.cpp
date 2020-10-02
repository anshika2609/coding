
/* * * * * * * * * * * * * * 		
#                          *
#  @Author  ANSHIKA AGRAWAL  *
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
int merge(int arr[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=0,b[high-low+1];
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;k++;
		}
		else
		{
			b[k]=arr[j];
			j++;k++;
		}
	}
	while(i<=mid)
	{
		b[k]=arr[i];
		i++;k++;
	}
	while(j<=high)
	{
		b[k]=arr[j];
		j++;k++;
	}
	for(i=low;i<=high;i++)
		arr[i]=b[i-low];

}
void merge_sort(int arr[],int low,int high)
{
	if(low<high){
		int mid=(low+high)/2;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main()
{	
	int i,n,low;
	cin>>n;
	int arr[n+1];
	for(i=0;i<n;i++)
		cin>>arr[i];
	merge_sort(arr,0,n-1);

	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";

	return 0;
}