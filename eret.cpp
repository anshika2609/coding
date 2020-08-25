#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,i,j;
		cin>>n>>m;
		ll ans=0;
		char a[n+1][m+1];
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				cin>>a[i][j];

		for(j=1;j<m;j++)
		{
			if(a[n][j]=='D')
				ans++;
		}
		for(i=1;i<=n;i++)
		{
			if(a[i][m]=='R')
				ans++;
		}
		cout<<ans<<endl;
		

	}
	return 0;
}