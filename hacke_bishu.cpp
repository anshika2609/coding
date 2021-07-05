#include<bits/stdc++.h>
using namespace std;
int vis[10005]={0};
int dis[10005]={0};
vector< vector<int> >vv(100005);
void dfs(int node,int d)
{
    vis[node]=1;
    for(int i=0;i<vv[node].size();i++)
    {
        if(vis[vv[node][i]]==0)
            dfs(vv[node][i],dis[node]+1);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        vv[u].push_back(v);
        vv[v].push_back(u);
    }
    dfs(1,0);
    int q,min_dist=INT_MAX,ans=-1;
    cin>>q;
    while(q--)
    {
        int girl_city;
        cin>>girl_city;
        if(dis[girl_city] < min_dist){
            min_dist = dis[girl_city];
            ans = girl_city;
        }
        else if(dis[girl_city] == min_dist && ans > girl_city)
            ans = girl_city;
    }
    cout<<ans<<endl;
}