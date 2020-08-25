<<<<<<< HEAD
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


=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ans=ans^x;
    }
    cout<<ans<<endl;
    return 0;
}


>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
/////https://www.hackerrank.com/challenges/lonely-integer/problem