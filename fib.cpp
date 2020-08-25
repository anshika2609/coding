#include<bits/stdc++.h>
using namespace std;
int find(int n)
{
	if(n==1 || n==0)
		return 1;
	else if(n==2)
		return 2;
	else
		return find(n-3)+find(n-2)+find(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<find(n);

	return 0;
}