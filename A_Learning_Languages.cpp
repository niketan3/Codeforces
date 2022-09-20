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
void dfs(int *visted, vector<vector<int>> &graph, int i)
{
    // cout << i << endl;
    visted[i] = 1;
    for (auto x : graph[i])
    {
        // cout << i << " " << x << endl;
        if (visted[x] == 0)
        {
            // cout << x << endl;
            dfs(visted, graph, x);
        }
    }
}
int main()
{

    {
        int n;
        cin >> n;
        int l;
        cin >> l;
        vector<vector<int>> graph;
        for (int i = 0; i <= l; i++)
        {
            vector<int> tp;
            graph.push_back(tp);
        }
        int cnt1 = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
            {
                cnt1++;
            }
            for (int j = 0; j < x; j++)
            {
                int y;
                cin >> y;
                graph[y].push_back(i);
            }
            // cout<<endl;
        }

        vector<vector<int>> graph1;
        for (int i = 0; i <= n; i++)
        {
            vector<int> tp;
            graph1.push_back(tp);
        }
        for (int i = 1; i <= l; i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                for (int k = j + 1; k < graph[i].size(); k++)
                {
                    graph1[graph[i][j]].push_back(graph[i][k]);
                    graph1[graph[i][k]].push_back(graph[i][j]);
                }
            }
        }

        // for(int i=1;i<=n;i++)
        // {
        //     cout<<i<<" : ";
        //     for(auto x:graph1[i])
        //     {
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }
        int cnt = -1;
        int visted[n+ 1];
        memset(visted, 0, sizeof(visted));
        for (int i = 1; i <= n; i++)
        {
            if (visted[i] == 0 )
            {
                cnt++;
                dfs(visted, graph1, i);
            }
        }
        if(cnt1==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }
    return 0;
}