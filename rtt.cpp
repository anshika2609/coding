#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
string x,y;
cin>>x>>y;
int xx[26]={0},temp=0,a=0,b=0,temp1=0;
a=x.length();
for(int i=0;i<a;i++)
xx[x[i]-'a']++;
b=y.length();
for(int i=0;i<b;i++)
    xx[y[i]-'a']--;
    temp=y[0]-'a';
    temp1=y[b-1]-'a';
   for(int i=0;i<temp;i++){
        while(xx[i]!=0)
            {cout<<char(i+'a');xx[i]--;}
    }

    if(temp1<temp)
    {
        cout<<y;
        for(int i=temp;i<26;i++){
            while(xx[i]!=0)
                {cout<<char(i+'a');xx[i]--;}
        }
        cout<<endl;
    }
    else
    {
        for(int i=temp;i<=temp;i++)
        {
            while(xx[i]!=0)
                {cout<<char(i+'a');xx[i]--;}
        }
        cout<<y;
        for(int i=temp+1;i<26;i++){
            while(xx[i]!=0)
                {cout<<char(i+'a');xx[i]--;}
        }
        cout<<endl;
    }

    }
return 0;
}