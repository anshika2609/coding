
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
		char matrix[3][3];
		ll matrix1[3][3];
		vector<ll>vv;
		ll i,j,count_x=0,count_O=0;
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
			{
				cin>>matrix[i][j];
				if(matrix[i][j]=='X'){
					++count_x;
					matrix1[i][j]=1;
				}
				else if(matrix[i][j]=='O'){
					++count_O;
					matrix1[i][j]=0;
				}
				else
					matrix1[i][j] = -3;
			}
		
		for(i=0;i<3;i++){
			ll sum=0;
			for(j=0;j<3;j++)
				sum+=matrix1[i][j];
			vv._pb(sum);}

		
		for(i=0;i<3;i++){
			ll sum=0;
			for(j=0;j<3;j++)
				sum+=matrix1[j][i];
			vv._pb(sum);}

		ll sum=0;
		for(i=0;i<3;i++)
			sum+=matrix1[i][i];
		vv._pb(sum);

		vv._pb(matrix1[0][2]+matrix1[1][1]+matrix1[2][0]);

		ll ans_0=0,ans_3=0;
		for(i=0;i<vv.size();i++)
		{
			if(vv[i]==0)
				ans_0++;
			if(vv[i]==3)
				ans_3++;
		}
		
		if(abs(count_x-count_O)>1 || count_O>count_x || (ans_0==1 && ans_3==1) || (count_x-count_O == 1 && ans_0==1) || (count_O==count_x && ans_3==1))
			cout<<"3"<<endl;

		else if((count_x+count_O == 9 && ans_3==0 && ans_0==0) || (count_x>count_O && ans_3>=1) || (count_O==count_x && ans_0>=1))
			cout<<"1"<<endl;

		else
			cout<<"2"<<endl;

	}


	return 0;
}