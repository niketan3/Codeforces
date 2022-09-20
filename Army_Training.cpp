#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll dp[1005];
ll solve(ll arr[], ll n, int i = 0, ll defe = 0, ll attack = 0)
{
    if (i == n)
    {
        return attack * defe;
    }
    else if (dp[i] != -1)
    {
        return dp[i];
    }
    else
    {
        ll ans1 = solve(arr, n, (i + 1), defe, attack + arr[i]);
        ll ans2 = solve(arr, n, (i + 1), (defe + 1000 - arr[i]), attack);
        cout << i << " : "; 
        cout << max(ans1, ans2) << endl;
        // return dp[i] = max(ans1, ans2);
        return max(ans1, ans2);
    }
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        ll n;
        cin >> n;
        ll attack = 0;
        ll defe = 0;
        int mi = INT16_MAX;
        int ma = 0;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = solve(arr, n);
        cout << ans << endl;
    }
    return 0;
}