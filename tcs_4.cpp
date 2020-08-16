#include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll m,n,i,k=0,z=0,temp;
    cin>>n>>m;
    if(m>n){
        temp = m;
        m = n;
        n = temp;
    }
    ll p=m;
    set <ll> SS;
    if(m==n)
        cout<<0;

    else{
    for(i=n;i>=1;i--){
        if(n%i==0){
            n=i;
            SS.insert(i);
            if(i==m) 
                z++;
        }
    }
    for(i=m;i>=1;i--){
        if(m%i==0){
            m=i;
            SS.insert(i);
        }
    }
    set<ll,greater<ll> >::iterator itr;
    if(z == 0){
        cout<<SS.size()-1;
    }
    else{
        for(itr = SS.begin(); itr!=SS.end(); ++itr){
            if(*itr<=p){
                k++;
            }
        }
        cout<<SS.size()-k;
    }
  }
    SS.clear();
    return 0;
}