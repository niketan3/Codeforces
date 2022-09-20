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
const ll M = 1000000007;
int main()
{
    {
        ll x, y;
        cin >> x >> y;
        int n;
        cin >> n;
        ll temp1 = x;
        ll temp2 = y;
        ll ans = (temp2 - temp1) % M;
        for (int i = 2; i < n; i++)
        {
            ans = (temp2 - temp1) % M;
            temp1 = temp2;
            temp2 = ans;
        }
        if (ans < 0)
        {
            cout << (M + ans) % M << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}