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
class Node
{
	public:
		int data;
		Node *next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}

};
void insert_at_begin(Node *head,int data)
{
	Node temp=new node(int data);
	temp.next = head;
	head = temp;

	return head;
}
void insert_at_end(Node *head,int data)
{
	while(head!=NULL)
	{
		head=head.next;
	}
	Node temp1=new node(int data);
	head=temp1;
	temp1.next=NULL;

	return head;
}
void printlist(Node* node)
{
	while(node!=NULL)
	{
		node=node.next;
		cout<<node.data<<" ";
	}
	cout<<"\n";
}

int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n,i
		cin>>n;
		Node* head=NULL;
		int data,indicator;
		for(int i=0;i<n;i++)
		{
			cin>>data>>indicator;
			if(indicator==1)
				head=insert_at_end(head,data);
			else
				head=insert_at_begin(head,data);

		}
		printlist(head);
	}
	return 0;
}