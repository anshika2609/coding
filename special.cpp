#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[205][205];
ll check(char a, char b)
{
	if(a=="?" && b=="?")
		return 3;

	if(a>="a" && a<="c")
		return 0;

	if(b>="A" && b<="C")
		return 0;

	if(a=="?" || b=="?")
		return 1;

	if(a-'A'== b-'a')
		return 1;

	return 0;


}
ll dp1[205][205];
ll go(ll aa,ll bb)
{
	if(dp1[aa][bb]!=-1)
		return dp1[aa][bb];

	ll i,n=bb-aa+1,ans=dp[aa][bb];

	for(i=2;i<n;i++)
	if(dp[aa][aa+i-1]>0)
		ans=(ans+dp[aa][aa+i-1]*go(aa+i,bb))%100000;

	return dp1[aa][bb]=ans;
}
int main()
{
	ll n,i,j,k,aa,bb,mid;
	string str;
	cin>>n>>str;

	memset(dp1,-1,sizeof dp1);
	for(i=2;i<=n;i+=2)
		for(j=1;j+i-1<=n;j++)
		{
			aa=j;
			bb=j+i-1;
			if(i==2)
				dp[aa][bb]=check(str[aa-1],str[bb-1]);
			else
			{
				mid=go(aa+1,bb-1);
				dp[aa][bb]=(dp[aa][bb]+ check(str[aa-1],str[bb-1])*mid)%100000;
			}

		}

	cout<<go(1,n)<<endl;

	return 0;
}