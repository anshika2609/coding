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
class node
{
	public:
		int data;
		node* next;
	node(int data)
	{
		this->data = data;
		next=NULL;
	}

};
int main()
{
	node n1(1);
	node n2(2);
	node* head=&n1;
	n1.next=&n2;
	cout<<n1.data<<" "<<n2.data<<" ";
	cout<<head<<" "<<n1.next<<" "<<n2.next<<endl;

	return 0;
}