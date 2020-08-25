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
void merge(ll arr[],ll low,ll mid,ll high)
{
	ll n1,n2,i,j,k;
	n1=mid-low+1;
	n2=high-mid;
	ll left[n1],right[n2];
	for(i=0;i<n1;i++)
		left[i]=arr[low+i];

	for(j=0;j<n2;j++)
		right[j]=arr[mid+j+1];

//	left[i]=9999;
//	right[i]=9999;

	i=0,j=0,k=1;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=right[j];
		j++;
		k++;
	}

}
void merge_sort(ll arr[],ll low,ll high)
{
	if(low<high)
	{
		ll mid=(low+high)/2;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main()
{
	ll n,i;
	cin>>n;
	ll arr[n+1];
	for(i=0;i<n;i++)
		cin>>arr[i];

	merge_sort(arr, 0, n-1);
	cout<<"printed array"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;	
	return 0;
}