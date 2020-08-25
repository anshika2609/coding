#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i,x;
    cin>>n;
   	while(n>0)
   	{
   		n=n&(n-1);
   		ans++;
   	}
   	cout<<ans<<endl;
    return 0;
}


/////https://www.hackerrank.com/challenges/lonely-integer/problem