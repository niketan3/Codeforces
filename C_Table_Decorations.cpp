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

    vector<ll> v;
    ll r, g, b;
    cin >> r >> g >> b;
    v.push_back(r);
    v.push_back(g);
    v.push_back(b);
    sort(v.begin(), v.end());
    if (v[2] >= 2 * (v[1] + v[0]))
    {
        cout << v[1] + v[0] << endl;
    }
    else
    {
        cout << (v[0] + v[1] + v[2]) / 3 << endl;
    }
}