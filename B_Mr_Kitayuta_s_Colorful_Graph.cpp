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
int ans = 0;
vector<pair<int, int>> graph[105];
int visited[105];
int colortaken[105];
bool check = false;
vector<ll> v[100][100];


void dfs(ll const& s, ll const& col, ll const& dest, vector<bool> &vis)
{
    vis[s] = true;
 
    if(s == dest)
    {
        check = true;
        return;
    }
 
    for(auto &value : v[col][s])
    {
        if(!vis[value] && !check)
        {
            dfs(value, col, dest, vis);
        }
        else if(check)
        {
            break;
        }
    }
}
int main()
{
        ll n, m;
    cin >> n >> m;
 
    for(ll i = 0; i < m; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        x--; y--; z--;
        v[z][x].push_back(y);
        v[z][y].push_back(x);
    }
 
    ll temp;
    cin >> temp;
    for(ll i = 0; i < temp; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--; y--;
 
        ll count = 0;
        for(ll j = 0; j < 100; j++)
        {
            vector<bool> vis(100, false);
            dfs(x, j, y, vis);
            if(check)
            {
                check = false;
                count++;
            }
        }
        cout << count << endl;
    }
}
