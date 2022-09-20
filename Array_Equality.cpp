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
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll count = 0;
        ll count1 = 0;
        ll ma = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                count++;
                // cout<<count<<endl;
                ma = max(count, ma);
            }
            else
            {
                count = 0;
                count1++;
            }
        }
        ma++;
        if (n % 2 == 0)
        {
            if ((n / 2) + 1 > ma)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            if (((n + 1) / 2) + 1 > ma)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        // cout << ma << endl;
    }
    return 0;
}