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
		this->data=data;
		next=NULL;
	}
};
node *insert_at_end(node *head,int newData);
node *insert_at_front(node *head,int newData);
node *insert_at_end(node *head,int data)
{
	node *temp1=new node(data);
	node *p=head;
	while(p->next!=NULL)
		p=p->next;

	p->next=temp1;

	return head;
}
node *insert_at_front(node *head,int data)
{
	node *temp=new node(data);
	temp->next=head;
	head=temp;

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
int main()
{	
	int n,i,data,indicator;
	cin>>n;
	node *head=NULL;
	for(i=0;i<n;i++)
	{
		cin>>data>>indicator;
		if(indicator==1)
			head=insert_at_end(head,data);
		else
			head=insert_at_front(head,data);
	}
	print_list(head);
	return 0;
}