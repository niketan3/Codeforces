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
    ll n;
    cin >> n;
    memset(rank1, 0, sizeof(rank1));
    vector<pair<ll, ll>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
    vector<ll> cost(n + 1);
    vector<ll> k(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        cost[i] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        k[i] = x;
    }
    vector<pair<ll, pair<ll, ll>>> edges;
    for (int i = 1; i <= n; i++)
    {
        edges.push_back({cost[i], {0, i}});
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            ll dist = abs(v[i].first - v[j].first) + abs(v[j].second - v[i].second);
            ll co = dist * (k[i] + k[j]);
            edges.push_back({co, {i, j}});
        }
    }

    sort(edges.begin(), edges.end());
    // for (auto &x : edges)
    // {
    //     cout << x.first << " " << x.second.first << " " << x.second.second << '\n';
    // }
    for (int i = 0; i <= n; i++)
    {
        par[i] = i;
    }
    ll ans = 0;
    vector<int> powerstation;
    vector<pair<int, int>> connection;
    for (auto &edges : edges)
    {
        ll weight = edges.first;
        ll first = edges.second.first;
        ll second = edges.second.second;
        if (findpar(first) == findpar(second))
        {
            continue;
        }
        else
        {
            // cout<<"wre"<<weight<<endl;
            ans += weight;
            Union(first, second);
        }
        if (first == 0 || second == 0)
        {
            powerstation.push_back(max(first, second));
        }
        else
        {
            connection.push_back({first, second});
        }
    }
    // for(auto edge:edges)
    // {
    //     cout<<edge.first<<" "<<edge.second.first<<" "<<edge.second.second<<endl;
    // }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << " " << par[i] << "\n";
    // }
    cout << ans << endl;
    cout << powerstation.size() << endl;
    for (auto x : powerstation)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << connection.size() << endl;
    for (auto &x : connection)
    {
        cout << x.first << " " << x.second << endl;
    }
}