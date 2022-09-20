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

    ll n, t;
    cin >> n >> t;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    vector<ll> pre;
    pre.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        pre.push_back(v[i] + pre[i - 1]);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            auto it = lower_bound(pre.begin(), pre.end(), t);
            ll x = it - pre.begin();
            ans = max(ans, x);
            if(*it==t)
            {
                ans=max(ans,x+1);
            }
        }
        else
        {
            auto it = lower_bound(pre.begin(), pre.end(), pre[i - 1] + t);
            ll x = it - pre.begin();
            if(*it==pre[i-1]+t)
            {
                x++;
            }
            ans = max(ans, x - i);
        }
    }
    cout << ans << endl;
    return 0;
}