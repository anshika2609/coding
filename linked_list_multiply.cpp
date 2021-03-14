
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
class node
{
	public:
		int data;
		node *next;
	node(int data)
	{
		this->data = data;
		next = NULL;
	}
};
node *insertion(node *head,int data)
{
	node *new_node = new node(data);
	if(head==NULL)
		return new_node;
	node *p = head;
	while(p->next != NULL)
		p=p->next;

	p->next = new_node;

	return head;
}
void print_list(node *head)
{
	while(head !=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
ll convert_num(node *head)
{
	ll num=0;
	ll decimal = 1;
	while(head!=NULL)
	{
		num*=10;
		num+=head->data*decimal;
		head=head->next;
		//cout<<num<<" ";
		//num*=10;
	}
//	cout<<num<<endl;
	return num;
}
int main()
{	
	int i,n,data,k1,k2,m;
	cin>>n>>m;
	node *head=NULL;
	node *head1=NULL;
	for(i=1;i<=n;i++)
	{
		cin>>data;
		head = insertion(head,data);
	}
	for(i=1;i<=m;i++)
	{
		cin>>data;
		head1=insertion(head1,data);
	}
	print_list(head);
	print_list(head1);
	k1=convert_num(head);
	k2=convert_num(head1);
	cout<<k1<<" "<<k2<<endl;
	cout<<k1*k2<<endl;
	//cout<<convert_num(head)*k<<endl;


	return 0;
}