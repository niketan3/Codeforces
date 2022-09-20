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
    vector<ll> v(100000);
    for (ll i = 1; i < 100000; i++)
    {
        v[i] = i * (i + 1) / 2;
    }
    // sort(v.begin(), v.end());
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        auto it = lower_bound(v.begin(), v.end(), k);
        if (*it == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == n - 1 or i == n - 2)
                {
                    cout << 'b';
                    continue;
                }
                cout << 'a';
            }
            cout << endl;
        }
        else
        {
            ll rada = it - v.begin();
            // cout<<rada<<endl;
            ll temp = *it;
            auto it1 = --it;
            ll rada1 = k - (*it1);
            for (int i = 0; i < n; i++)
            {
                if (i == (n - rada - 1))
                {
                    cout << 'b';
                    continue;
                }
                if (i == (n - rada1))
                {
                    cout << 'b';
                    continue;
                }
                cout << 'a';
            }
            cout << endl;
        }
    }
    return 0;
}