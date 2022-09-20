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
    int e;
    cin >> e;
    // cout<<"H";
    vector<pair<int, bool>> graph[6];

    int vis[6][6] = {0};
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back({y, 1});
        graph[y].push_back({x, 1});
        vis[x][y] = 1;
        vis[y][x] = 1;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (vis[i][j] == 0)
            {
                graph[i].push_back({j, 0});
                graph[j].push_back({i, 0});
                vis[i][j] = 1;
            }
        }
    }
    // for (auto x : graph)
    // {
    //     for (auto y : x)
    //     {
    //         cout << y.first << " " << y.second << endl;
    //     }
    // }
    int flag = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (auto x : graph[i])
        {
            int y = x.first;
            int color = x.second;
            for (auto r : graph[y])
            {
                int rada = r.first;
                int color1 = r.second;
                if (color1 == color)
                {

                    for (auto l : graph[rada])
                    {
                        if (l.first == i)
                        {
                            if (l.second == color)
                            {
                                flag = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    if (flag)
    {
        cout << "WIN\n";
    }
    else
    {
        cout << "FAIL\n";
    }
    return 0;
}