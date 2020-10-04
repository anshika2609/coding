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
 
/**********************************/
class node
{
	public:
		int data;
		node *next;

	node(int data)
	{
		this->data=data;
		next=NULL;
	}
};
void print_list(node *head) //// PRINT ////////
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
node *insertion_at_end(node *head,int data) ///// INSERT ///////
{
	node *new_node=new node(data);
	if(head==NULL)
		return new_node;
	node *p=head;
	while(p->next != NULL)
		p=p->next;

	p->next=new_node;
	return head;
}
int count_node(node *head)        ////////// COUNT NODES ///////
{
	// int count=0;
	// while(head != NULL)
	// {
	// 	count++;
	// 	head=head->next;
	// }
	// cout<<count<<endl;
	if(head==NULL)
		return 0;
	return 1 + count_node(head->next);
	
} 
node *reverse(node *head)   //reverse the string (second part)
{
node *p , *q;
if(head == NULL)
return head;
p = head;
q = p->next;
if(q == NULL)
return p;
q = reverse(q);
p->next->next = p;
p->next = NULL;
return q;
}

void middle_element(node *head)      ///// MIDDLE ELEMENTS ///
{
	node *p=head;
	node *q=head;
	while(q!=NULL && q->next != NULL)
	{
		p=p->next;
		q=q->next->next;
	}
	cout<<p->data<<endl;
	return;
}

int main()
{	
	int n,i,data;
	cin>>n;
	node *head=NULL,*new_start;
	for(i=0;i<n;i++)
	{
		cin>>data;
		head=insertion_at_end(head,data);
	}
	cout<<"linked list after insertion"<<endl;
	print_list(head);
	cout<<count_node(head)<<"\n";
	middle_element(head);
	new_start=reverse(head);
	while(new_start!=NULL)
	{
		cout<<new_start->data<<" ";
		new_start = new_start->next;
	}
	
	return 0;
}