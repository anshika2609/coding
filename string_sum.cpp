#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2="";
	cin>>str1;
	int sum=0,curr=0;
	for(int i=0;i<str1.length();i++)
	{
		if(isdigit(str1[i]))
			curr = curr*10 + str1[i]-'0';
		else
		{
			sum+=curr;
			curr=0;
		}
			
	}
	sum+=curr;
	cout<<sum<<endl;

	return 0;
		
}