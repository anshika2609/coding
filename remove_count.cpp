#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str="";
	cin>>str1;
	unordered_map<char,int>mp;
	for(int i=0;i<str1.length();i++)
		mp[str1[i]]++;
	for(auto &x:mp)
		str.push_back(x.first);
	cout<<str<<endl;
	return 0;
}

