#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int> qq;
	int n,i,x,k;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>x;
		qq.push(x);
		if(qq.size()>k)
			qq.pop();


	}cout<<qq.top();

	return 0;
}