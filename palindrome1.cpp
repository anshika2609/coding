#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int rem=0;
	int k=n;
	while(n!=0)
	{
		rem = rem*10 + n%10;
		n=n/10;
	}
	if(k==rem)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	//cout<<rem<<endl;
	return 0;
}