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
    ll n, d;
    cin >> n >> d;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll i = 0;
    ll j = n - 1;
    ll temp = 0;
    int flag = 0;
    while (i <= j)
    {
        if (temp > d)
        {
            temp = 0;
            flag = 0;
            ans++;
        }
        else if (flag == 0)
        {
            flag = 1;
            temp = temp + v[j];
            j--;
        }
        else
        {
            temp = temp + v[j];
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}