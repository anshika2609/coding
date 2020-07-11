 
/* * * * * * * * * * * * * * 		
#                          *
#  @Author  ANSHIKA AGRAWAL*
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
}
/******************************************************************************************************/
ll dp[1002][1002][3][3][2];
ll a[1002][1002];
int main()
{	
	ll n,m,i,j;
	cin>>n>>m;
 
	dp[1][0][0][0][0]=1;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			s(a[i][j]);
 
	ll c1,c2,c3,x,y,u,v,w,cc1,cc2,cc3;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			c1=0,c2=0,c3=0;
			while(a[i][j]%1361 == 0)
			{
				++c1;
				a[i][j] = a[i][j]/1361;
			}
			while(a[i][j]%107 == 0)
			{
				++c2;
				a[i][j] = a[i][j]/107;
			}
			while(a[i][j]%10000019 == 0)
			{
				++c3;
				a[i][j] = a[i][j]/10000019;
			}
			x=i-1;
			y=j;
			for(u=0;u<=2;u++)
				for(v=0;v<=2;v++)
					for(w=0;w<=1;w++)
					{
						// dp[x][y][u][v][w];
						cc1=min(c1+u,(ll)2);
						cc2=min(c2+v,(ll)2);
						cc3=min(c3+w,(ll)1);
						dp[i][j][cc1][cc2][cc3] = (dp[i][j][cc1][cc2][cc3] + dp[x][y][u][v][w])%MOD;
					}
		
 
			x=i;
			y=j-1;
			for(u=0;u<=2;u++)
				for(v=0;v<=2;v++)
					for(w=0;w<=1;w++)
					{
						// dp[x][y][u][v][w];
						cc1=min(c1+u,(ll)2);
						cc2=min(c2+v,(ll)2);
						cc3=min(c3+w,(ll)1);
						dp[i][j][cc1][cc2][cc3] = (dp[i][j][cc1][cc2][cc3] + dp[x][y][u][v][w])%MOD;
					}
 
			// cout<<i<<" "<<j<<"-> "<<dp[i][j][2][2][1]<<"\n";
			// cout<<c1<<" "<<c2<<" "<<c3<<"**\n";
		}
	// for(i=1;i<=n;i++)
	// 	for(j=1;j<=m;j++)
	ll ans = 0;
	for(u=0;u<=2;u++)
		for(v=0;v<=2;v++)
			for(w=0;w<=1;w++)
			{	
				// if(u!=2 || v!=2 || w!=1)
				ans = (ans+dp[n][m][u][v][w])%MOD;
			}
	cout<<M(ans-dp[n][m][2][2][1])<<endl;
	return 0;
 
}