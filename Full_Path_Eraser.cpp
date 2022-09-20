#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5 + 9;
ll glob = -1;
void dfs2(int vertex, vector<bool> &visited, vector<vector<int>> &graph, vector<ll> &gcd_val, vector<bool> &tobedeleted)
{
    if (visited[vertex] || tobedeleted[vertex])
    {
        return;
    }
    else
    {
        visited[vertex] = true;
        if (glob == -1)
        {
            glob = gcd_val[vertex];
        }
        glob = __gcd(glob, gcd_val[vertex]);
        for (auto child : graph[vertex])
        {
            dfs2(child, visited, graph, gcd_val, tobedeleted);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> graph(n + 1);
        vector<ll> gcd_val(n + 1, -1);
        ll inp;
        for (int i = 1; i <= n; i++)
        {
            cin >> inp;
            gcd_val[i] = inp;
        }
        int src, dest;
        vector<int> baap(n + 1, -1);
        for (int i = 1; i < n; i++)
        {
            cin >> src >> dest;
            graph[src].push_back(dest);
            graph[dest].push_back(src);
            baap[dest] = src;
        }
        ll ma = -1;
        for (int i = 1; i <= n; i++)
        {
            vector<bool> visited(n + 1, false);
            int del = i;
            vector<bool> tobedeleted(n + 1, false);
            tobedeleted[1] = true;
            while (del != 1)
            {
                tobedeleted[del] = true;
                del = baap[del];
            }
            ll sum = 0;
            for (int i = 1; i <= n; i++)
            {
                if (!visited[i] && !tobedeleted[i])
                {
                    dfs2(i, visited, graph, gcd_val, tobedeleted);
                    sum += glob;
                    glob = -1;
                  
                }
            }
            ma = max(ma, sum);
        }
        cout << ma << "\n";
        glob = -1;
    }
    return 0;
}