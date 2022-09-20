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
        int x, y;
        cin >> x >> y;
        int a = y - 1;
        int c = (3 * x - y - a);
        if (a <= 1000 and a >= -1000 and c <= 1000 and c >= -1000)
        {
            if (min(a, c) <= y and max(a, c) >= y)
            {
                cout << min(a, c) << " " << y << " " << max(a, c) << endl;
                continue;
            }
        }
        c = y + 1;
        a = 3 * x - c - y;
        if (a <= 1000 and a >= -1000 and c <= 1000 and c >= -1000)
        {
            cout << min(a, c) << " " << y << " " << max(a, c) << endl;
        }
    }
    return 0;
}