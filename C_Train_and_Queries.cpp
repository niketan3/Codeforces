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
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        while (k--)
        {
            ll x, y;
            cin >> x >> y;
            cout<<x<<" "<<y<<": ";
            auto it = lower_bound(v.begin(), v.end(), x);
            cout<<*it<<" ";
            cout<<it-v.begin()<<endl;
            if (it == v.end())
            {
                cout << "NO\n";
            }
            else
            {
                // int temp = it - v.begin();
                // cout<<temp<<endl;
                // cout<<y<<endl;
                auto it1 = lower_bound(it++, v.end(), y);
                if (it1 == v.end())
                {
                    cout << "NO\n";
                }
                else
                {
                    cout << "YES\n";
                }
            }
        }
    }
    return 0;
}