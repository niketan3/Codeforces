#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
bool visited[100005];
ll arr[100005];
ll ans=0;
ll temp=INT_MAX;
void dfs(vector<ll>graph[],int i)
{
    temp=min(temp,arr[i]);
    visited[i]=1;
    for(auto x:graph[i])
    {
        if(visited[x]==0)
        {

            dfs(graph,x);
        }
    }
}
int main()
{
    {
        int n,m;
        cin>>n>>m;
        // ll arr[n+1];
        vector<ll>graph[n+1];
        
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            graph[i].push_back(i);
        }
        
        for(int i=0;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        
        memset(visited,0,sizeof(visited));
        for(int i=1;i<=n;i++)
        {
            if(visited[i]==0 and graph[i].size()!=0)
            {
                dfs(graph,i);
                ans=ans+temp;
                temp=INT_MAX;
            }
        }
        cout<<ans<<'\n';
        ans=0;
    }
    return 0;
}