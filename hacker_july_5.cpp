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

ll MaxIncreasingSub(ll arr[], ll n, ll k, ll m) 
{ 
    
    ll dp[n][k + 1], ans = -1; 
    memset(dp, -1, sizeof(dp)); 
    for (ll i = 0; i < n; i++)   
        dp[i][1] = arr[i]; 
    
  
    for (ll i = 1; i < n; i++)
    { 
        for (ll j = 0; j < i; j++)
        { 
            if (arr[j] < arr[i])
            { 
                for(ll l = 1; l <= k - 1; l++)
                { 
  
                    if (dp[j][l] != -1) { 
   
                        dp[i][l + 1] = max(dp[i][l + 1],  
                                          dp[j][l] + arr[i]); 
                      //  dp[i][l+1] = dp[i][l+1]*((l+1) % m);
                    } 
                } 
            } 
        } 
    } 

    for (int i = 0; i < n; i++) { 
        if (ans < dp[i][k]) 
            ans = dp[i][k]; 
    } 
   
    return (ans == -1) ? 0 : ans; 
}  
int main()
{	
	ll n,k,m,i;
	s(n),s(k),s(m);
   	ll arr[n+1];
   	for(i=0;i<n;i++)
   		s(arr[i]);
    ll ans = MaxIncreasingSub(arr, n, k, m); 
    cout << ans << "\n"; 
    return 0; 


	return 0;
}