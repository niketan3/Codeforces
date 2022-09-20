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
vector<bool> dest;
vector<bool> now;
void dfs1(vector<int> graph[], int i, int par, int flag)
{
    for (auto x : graph[i])
    {
        if (x != par)
        {

            if (flag == 0)
            {

                dfs1(graph, x, i, 1);
            }
            else
            {
                // cout << x << " ";
                now[x] = now[x] ^ 1;
                dfs1(graph, x, i, 0);
            }
        }
    }
}
int opr = 0;
vector<int> ans;
void dfs(vector<int> graph[], int i, int par)
{
    if (dest[i] != now[i])
    {
        // cout<<i<<endl;
        now[i] = dest[i];
        opr++;
        ans.push_back(i);
        dfs1(graph, i, par, 0);
    }
    for (auto x : graph[i])
    {
        if (x != par)
        {
            dfs(graph, x, i);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    now.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        now.push_back(x);
    }
    dest.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dest.push_back(x);
    }
    dfs(graph, 1, -1);
    cout << opr << endl;
    for (auto x : ans)
    {
        cout << x << endl;
    }
    // cout<<endl;
    return 0;
}