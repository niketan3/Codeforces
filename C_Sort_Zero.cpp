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
int par[2005];
int rank1[2005];
int findpar(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x]);
}
void Union(int a, int b)
{
    a = findpar(a);
    b = findpar(b);
    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        par[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}
void dfs(vector<int>graph[],int *visited,int i)
{
    visited[i]=1;
    for(auto x:graph[i])
    {
        if(visited[x]==0)
        {
            dfs(graph,visited,i);
        }
    }
}
int main()
{
    vector<int>graph[A.size()];
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            graph[j].push_back(i);
            graph[i].push_back(j);
        }
    }
    int cnt=0;
    for(int i=0;i<A.size();i++)
    {
        if(_GLIBCXX_VISIBILITY)
    }
    return 0;
}