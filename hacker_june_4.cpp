#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
 
struct classcomp {
  bool operator() (const long long &p, const long long &q) const
  {return p > q;}
};
 
void solve(vector<vector<int>>& C){
    int n;
    cin>>n;
 
    unsigned int k, inp, mask = 1;
 
    cin>>k;
    
    vector<int> bits(31);
    
    for(int i = 0; i < n; ++i){
        cin>>inp;
 
        for(int j = 0; j < 31; ++j){
            if(inp & (mask<<j))
                ++bits[j];
        }
    }
 
    map<long long, long long, classcomp> m;
 
    long long val, ans = 1;
    for(int j = 0; j < 31; ++j){
        if(bits[j] > 0){
            val = bits[j] * (mask<<j);
 
            ++m[val];
        }
    }
 
    for(auto &val: m){
        if(val.s <= k){
            k = k - val.s;
        }
        else{
            ans = C[val.s][k];
            k = 0;
        }
 
        if(k < 1)
            break;
    }
 
    if(k > 0)
        cout<<-1<<"\n";
    else
        cout<<ans<<"\n";
}
 
int main(){
    int t; 
    
    cin>>t;
 
    vector<vector<int>> C(31, vector<int>(31));
    for (int i = 0; i <= 30; i++) 
    { 
        for (int j = 0; j <= min(i, 30); j++) 
        { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 

            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j]; 
        } 
    } 
 
    while(t--)
        solve(C);
 
    return 0;
}