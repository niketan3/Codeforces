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
    vector<ll> v;
    int ans = 0;
    int cur = 1;
    for (int i = 0; i < (2 * t); i++)
    {
        string s;
        cin >> s;
        if (s == "add")
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        else
        {
            if (!v.empty() and v.back() != cur)
            {
                ans++;
                v.clear();
                
            }
            else if(!v.empty() and v.back()==cur)
            {
                v.pop_back();
                cur++;
                continue;
            }
            cur++;
            
        }
    }
    cout << ans << "\n";
    return 0;
}