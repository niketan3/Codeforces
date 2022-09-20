#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int ma = 0;
int dp[4005];
int solve(int l, int a, int b, int c)
{
    if (l < 0 or (l > 0 && l < a && l < b && l < c))
    {
        return INT_MIN;
    }
    if (l == 0 )
    {
        return 0;
    }
    if (dp[l] != -1)
    {
        return dp[l];
    }
    int ans = 1 + max(solve(l - a, a, b, c), max(solve(l - b, a, b, c), solve(l - c, a, b, c)));
    return dp[l] = ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int l;
    cin >> l;
    int a, b, c;
    cin >> a >> b >> c;
    int ans = solve(l, a, b, c);
    cout << ans;
    return 0;
}