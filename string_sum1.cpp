#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str,str1="";
	cin>>str;
	int sum=0;
	for(int i=0;i<str.length();i++)
	{
		if(isdigit(str[i]))
			str1.push_back(str[i]);
		else
		{
			if(str1!="")
			{
				int z = stoi(str1);
				sum+=z;
				str1="";
			}
		}
	}
	if(str1!="")
	{
		int z = stoi(str1);
		sum+=z;
	}
	cout<<sum<<endl;
	return 0;
}
