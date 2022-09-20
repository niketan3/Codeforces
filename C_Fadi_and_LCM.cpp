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
    ll x;
    cin >> x;
    ll ans = x;
    ll ans1 = 1;
    for (ll i = 1; i <= sqrt(x); i++)
    {
        // cout<<i<<" ";
        if (x % i == 0)
        {
            
            ll temp = x / i;
            if ((temp * i) / (__gcd(temp, i)) == x)
            {
                if (max(temp, i) < ans)
                {
                    ans = max(temp, i);
                    ans1 = min(temp, i);
                }
            }
        }
    }
    cout << min(ans, ans1) << " ";
    cout << max(ans, ans1) << endl;
    // cout << __gcd(2147483647, 2147483647);
    // cout<<999999999989%2147483647;
    return 0;
}