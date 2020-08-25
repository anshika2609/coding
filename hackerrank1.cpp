<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,i;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            if(i==0)
                ans=1;
            else if(i%2!=0)
                ans=ans*2;
            else if(i%2==0 && i!=0)
                ans+=1;
        }
        cout<<ans<<endl;
    }

    return 0;
}

=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,i;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            if(i==0)
                ans=1;
            else if(i%2!=0)
                ans=ans*2;
            else if(i%2==0 && i!=0)
                ans+=1;
        }
        cout<<ans<<endl;
    }

    return 0;
}

>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
///// https://www.hackerrank.com/challenges/utopian-tree/problem /////