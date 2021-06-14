#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	vector<int>vv;
	vector<int>vv1;
	for(int i=0;i<str.size();i++)
	{
		if(isspace(str.at(i)))
			vv.push_back(i);
	}
	vv.push_back(str.size());
	vv1.push_back(vv[0]);
	for(int i=1;i<vv.size();i++)
		vv1.push_back(vv[i]-vv[i-1]-1);
	int ans = -1,k;
	for(int i=0;i<vv1.size();i++)
	{
		if(vv1[i]%2==0)
		{
			ans = max(ans,vv1[i]);
		}
	}
	for(int i=0;i<vv1.size();i++)
	{
		if(vv1[i]==ans){
			 k=i;
			 break;
		}
	}  
	int p=vv[k],q;
	if(k-1 < 0)
		q=0;
	else
		 q=vv[k-1];
	for(int j=q+1;j<p;j++)
		cout<<str[j];                

	return 0;
}