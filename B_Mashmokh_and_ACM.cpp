#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1000000007;
int dp[2005][2005];
ll solve(int n, int k, int num)
{
    if (k == 1)
    {
        return 1;
    }

    if (dp[num][k] != -1)
    {
        return dp[num][k] % M;
    }
    ll ans = 0;
    for (int i = num;i<=n;i=i+num)
    {
        if (i % num == 0)
        {
            ans = (ans + solve(n, k - 1, i)) % M;
        }
    }
    return dp[num][k] = ans % M;
}
int main()
{
    int n, k;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans + solve(n, k, i)) % M;
    }
    cout << ans % M << endl;
    return 0;
}