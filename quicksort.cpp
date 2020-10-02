
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
void swap(int* a, int* b)  
{  
   	int t = *a;  
    *a = *b;  
    *b = t;  
}  
int partition(int arr[],int low,int high)
{
	int pivot,start,end;
	pivot = arr[low];
	start=low;
	end=high;
	while(start<end)
	{
		while(arr[start]<= pivot)
			start++;
		while(arr[end]>pivot)
			end--;

		if(start<end)
			swap(arr[start],arr[end]);
	}
	swap(arr[low],arr[end]);
	return end;
}
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  

        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
int main()
{	
	int n,i;
	cin>>n;
	int arr[n+1];
	for(i=0;i<n;i++)
		cin>>arr[i];
	quickSort(arr,0,n-1);
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}