#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1;
	cin>>str1;
	unordered_map<char,int>mp;
	for(int i=0;i<str1.length();i++)
		mp[str1[i]]++;
	for(auto &x:mp)
	{
		if(x.second>1)
			cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}

