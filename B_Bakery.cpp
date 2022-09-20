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
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<pair<int, int>, ll>> graph;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ll dist;
        cin >> dist;
        graph.push_back({{x, y}, dist});
    }
    set<int> ks;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        ks.insert(x);
    }
    ll mi = 10e9;
    for (int i = 0; i < graph.size(); i++)
    {
        int x = graph[i].first.first;
        int y = graph[i].first.second;
        ll dist = graph[i].second;
        auto it = ks.find(x);
        auto it1 = ks.find(y);
        if (it == ks.end() and it1 != ks.end())
        {
            mi = min(dist, mi);
        }
        else if (it != ks.end() and it1 == ks.end())
        {
            mi = min(dist, mi);
        }
    }
    if(mi==10e9)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<mi<<"\n";
    }
    return 0;
}