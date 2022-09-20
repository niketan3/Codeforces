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
    int t;
    cin >> t;
    map<ll, ll> m;
    ll b;
    cin >> b;
    vector<ll> v;
    for (int i = 0; i < t; i++)
    {
        ll x, y;
        cin >> x >> y;
        // cout<<x<<" "<<y<<endl;
        v.push_back(x);
        m[x] = m[x] + y;
    }
    sort(v.begin(), v.end());
    ll temp = 0;
    map<ll, ll> m1;
    for (auto x : m)
    {
        x.second = x.second + temp;
        temp = x.second;
        // cout<<x.second<<endl;
        m1[x.first] = x.second;
    }
    vector<ll> cost;
    vector<ll> fri;

    for (auto x : m1)
    {
        // cout<<x.first<<" "<<x.second<<endl;
        cost.push_back(x.first);
        fri.push_back(x.second);
    }
    ll ans = 0;
    // for(auto x:cost)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    for (int i = 0; i < cost.size(); i++)
    {
        ll temp = cost[i] + b;
        auto it = upper_bound(cost.begin(), cost.end(), temp);
        it--;
        if(*it==temp)
        {
            it--;
        }
        int index = it - cost.begin();
        // cout << index << " " << i << endl;
        if (i == 0)
        {
            ans = max(ans, fri[index]);
        }
        else
        {
            ans = max(ans, fri[index] - fri[i - 1]);
        }
    }
    cout << ans << endl;
}