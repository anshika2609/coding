
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
 
int main()
{	

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,s;
		cin>>n;
		vector<ll>univ(n+1),ans(n+1,0);
		vector< vector<ll> >skill(n+1);

		for(i=1;i<=n;i++)
			cin>>univ[i];

		for(i=1;i<=n;i++)
		{
			cin>>s;
			skill[univ[i]].push_back(s);
		}
		ll size;
		for(i=1;i<=n;i++)
		{
			sort(skill[i].begin(),skill[i].end(),greater<int>());
			size = skill[i].size();
			vector<ll>prev(size+1 , 0);
			for(int j=0;j<size;j++)
				prev[j+1] = prev[j] + skill[i][j];

			for(int j=1;j<=size;j++)
				ans[j]+= prev[size-(size%j)];
		}
		for(i=1;i<=n;i++)
			cout<<ans[i]<<" ";
		cout<<endl;

	}
	return 0;
}