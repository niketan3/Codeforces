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
        int n;
        cin >> n;
        int arr[n];
        int mi = 99999;
        int ma = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mi = min(mi, arr[i]);
            ma = max(ma, arr[i]);
        }
        int ans = abs(arr[0] - arr[n - 1]);
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, arr[i] - arr[i - 1]);
        }
        ans = max(ans, abs(arr[0] - ma));
        ans = max(ans, abs(arr[n - 1] - ma));
        ans = max(ans, abs(arr[0] - mi));
        ans = max(ans, abs(arr[n - 1] - mi));
        cout << ans << endl;
    }

    return 0;
}