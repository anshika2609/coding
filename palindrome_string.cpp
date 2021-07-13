#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int z=0,n=str.length();
	for(int i=0;i<n/2;i++)
	{
		if(str[i]!=str[n-i-1])
			++z;
	}
	if(z==0)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}