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
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        int i = n - 2;
        while (i >= 0)
        {
            if (v[i + 1] > 0)
            {
                v[i] = v[i] - (v[i + 1] / 2);
                if (v[i + 1] % 2 == 0)
                {
                    v[i + 1] = 0;
                }
                else
                {
                    if(v[i+1])
                }
            }
            i--;
        }
        ll sum = 0;
        for (auto x : v)
        {
            // cout << x << " ";
            sum += abs(x);
        }
        cout << sum << '\n';
    }
    return 0;
}