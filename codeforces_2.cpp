#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,k,ans=0,x;
		cin>>n;
		vector<int>vv;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x==1)
				vv.push_back(i+1);
		}
		if(vv.size()==1)
			ans=0;
		else
		{
			for(i=0;i<vv.size()-1;i++)
				ans+=abs(vv[i]-vv[i+1])-1;
			
		}
		cout<<ans<<endl;
		vv.clear();
	}
}