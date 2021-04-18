#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s, int k) 
    {
        vector<pair<char,int>>vv;
        for(char c : s)
        {
            if(vv.empty() || vv.back().first != c)
                vv.push_back({c,1});
            else
            {
                vv.back().second++;
                if(vv.back().second == k)
                    vv.pop_back();
            }
        }
        string final = "";
        for(auto ele : vv)
        {
            final.append(ele.second,ele.first);
        }
        return final;   
    }

int main()
{

    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<removeDuplicates(s,k);
    return 0;
}