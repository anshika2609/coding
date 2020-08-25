<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}
};
int main()
{
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node*head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<endl;
    cout<<n1.next<<" "<<n2.next<<" "<<n3.next<<endl;
    
	return 0;
}









=======
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}
};
int main()
{
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node*head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<endl;
    cout<<n1.next<<" "<<n2.next<<" "<<n3.next<<endl;
    
	return 0;
}









>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
