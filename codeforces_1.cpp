#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k=0,ans=0,z;
		cin>>n;
		z=n%10;
		while(n!=0)
		{
			n=n/10;
			++k;
		}
		//cout<<k<<" ";
		ans = 10*(z-1);
		if(k==1)
			cout<<ans+1<<endl;
		if(k==2)
			cout<<ans+3<<endl;
		if(k==3)
			cout<<ans+6<<endl;
		if(k==4)
			cout<<ans+10<<endl;
		//cout<<ans<<endl;
	}
	return 0;
}