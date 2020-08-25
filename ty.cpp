#include <bits/stdc++.h>
using namespace std;

int main()
{
    map mp;
    mp.insert({10,200});
    mp[5]=100;
    for(auto &x:mp)
    {
       cout<<x.first<<" "<<x.second<<endl; 
    }
    return 0;
}
