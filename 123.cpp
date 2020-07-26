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
ll prime[1000000];

ll power(ll x, ll y, ll z)
{
	ll res = 1;
	x = x % p;
	if (x == 0) 
		return 0;
	while (y > 0)
	{
		if (y & 1)
			res = (res*x) % z;
		y = y>>1;	
		x = (x*x) % z;
}
return res;
}
void sieve()
{
	prime[0] = prime[1] = 1;
	for (ll i = 2; i < 1000000; i++) 
	{
		if (prime[i] == 0) 
		{
			for (ll j = i * 2; j < 1000000; j += i) 
			{
				if (prime[j] == 0) 
				{
					prime[j] = i;
				}
			}
			prime[i] =i;
		}
	}
}


ll FCK(const ll arr[], ll n,ll m)
{
	unordered_map<ll, ll> max_map;
	for (ll i = 0; i < n; i++) 
	{
		ll num = ar[i];
		unordered_map<ll, ll> temp;
		while (num > 1) 
		{
			ll factor = prime[num];
			temp[factor]++;
			num /= factor;
		}
		for (auto it : temp) 
		{
			max_map[it.first] = max(max_map[it.first], it.second);
		}
	}
	ll ans = 1;
	for (auto it : max_map)
	{
		ans = (ans * power(it.F, it.S, m)) % m;
	}	
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();
	ll t;
	s(t);
	while(t--)
	{
		ll n,m,k,i,a,c;
		cin>>n>>m>>k;
		ll arr[n+1];
		for(i=0;i<n;i++)
			s(arr[i]);

		a=fuck(arr,n,m);
		a=power(a,k,m)
		cout<<a%m<<endl;
	}
return 0;
}