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

    int n;
    cin >> n;
    int x;
    cin >> x;
    int y;
    cin >> y;
    int a;
    cin >> a;
    int b;
    cin >> b;
    int d1, d2, d3, d4 = 0;
    int ans = INT_MAX;

    if (a == 0 && x == 0)
    {
        ans = abs(y - b);
    }
    else if (b == 0 && y == 0)
    {
        ans = abs(x - a);
    }
    else if (a == 0 || x == 0)
    {
        int d1 = y + (abs(x - a)) + b;
        int d2 = n - y + (abs(x - a)) + n - b;
        ans = min({d1, d2});
    }
    else if (y == 0 || b == 0)
    {
        int d3 = x + (abs(b - y)) + a;
        int d4 = n - x + (abs(b - y)) + n - a;
        ans = min({d3, d4});
    }

    else
    {
        int d1 = y + (abs(x - a)) + b;
        int d2 = n - y + (abs(x - a)) + n - b;
        int d3 = x + (abs(b - y)) + a;
        int d4 = n - x + (abs(b - y)) + n - a;
        ans = min({d1, d2, d3, d4});
    }
    cout << ans << endl;
    return 0;
}