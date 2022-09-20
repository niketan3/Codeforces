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
    while (t--)
    {
        int n;
        cin >> n;
        ll mi = INT_MAX;
        ll ma = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ma = max(ma, x);
            mi = min(mi, x);
        }
        if (mi >= 0)
        {
            cout << mi * mi << " " << ma * ma << endl;
        }
        else if (mi < 0 and ma > 0)
        {
            cout << mi * ma << " " << ma * ma << endl;
        }
        else
        {
            cout << ma* ma << " " << mi * mi << endl;
        }
    }
    return 0;
}