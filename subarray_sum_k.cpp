#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n>>k;
    int arr[n+1];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int sum=0,count=0;
    unordered_map<int,int>mp;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        mp[sum]++;
        if(sum == k)
            count+=1;
        
        if(mp.find(sum-k) != mp.end())
           count+=mp[sum-k];

    }
    cout<<count<<endl;
    return 0;
}

//// count subarray whose sum is equal to k