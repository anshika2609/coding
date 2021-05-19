
/* * * * * * * * * * * * * * 		
#                          *
#  @Author ANSHIKA AGRAWAL *
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

void lcs(int x, int y, string s1, string s2)
{   
       int dp[x+1][y+1];
       for(int i=0;i<=x;i++)
           for(int j=0;j<=y;j++)
           {
               if(i==0 || j==0)
                    dp[i][j] = 0;
            
               else if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
       for(int i=0;i<=x;i++){
       		for(int j=0;j<=y;j++){
       			cout<<dp[i][j]<<" ";
       		}
       		cout<<endl;}
}

int main()
{	
	string s1,s2;
	cin>>s1>>s2;
	int x = s1.length();
	int y = s2.length();
	lcs(x,y,s1,s2);

	return 0;
}