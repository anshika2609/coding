#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string x,y;
cin>>x>>y;
int xx[26] {0},temp {0},a {0},b {0};
a=x.length();
for(auto i=0;i<a;i++)
xx[x[i]-'a']++;
b=y.length();
for(auto i=0;i<b;i++)
    xx[y[i]-'a']--;
    temp=y[0]-'a';
   for(auto i=0;i<=temp;i++){
        while(xx[i]!=0)
            {cout<<char(i+'a');xx[i]--;}
    }
    cout<<y;
    for(auto i=temp+1;i<26;i++){
        while(xx[i]!=0)
            {cout<<char(i+'a');xx[i]--;}

             }
    cout<<endl;
    }
return 0;
}