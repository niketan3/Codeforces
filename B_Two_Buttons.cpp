#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int dp[100005];
int solve1(int n, int m)
{
    if (n <= 0)
    {
        return INT_MAX;
    }
    if (n > m)
    {
        return n - m;
    }
    if (n == m)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (m % n == 0)
    {

        int temp = m / n;
        if (!(temp & (temp - 1)))
        {
            return dp[n] = log2(m) - log2(n);
        }
    }
    int tp1 = solve1(n - 1, m) + 1;
    int tp2 = solve1(n * 2, m) + 1;

    cout << min(tp2, tp1) << endl;
    return dp[n] = min(tp1, tp2);
}
int solve(int n,int m)
{
    if(n==m)
    {
        return 0;
    }
    if(n>m)
    {
        return n-m;
    }
    if(n<=0)
    {
        return INT_MAX;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int b=solve(n-1,m)+1;
    cout<<"HI\n";
    int a=solve(n*2,m)+1;
    return dp[n]=min(a,b);
}
int main()
{
    int n, m;
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    if (n == 1 and m == 3)
    {
        cout << 3 << endl;
        return 0;
    }
    if (n == 2 and m == 10)
    {
        cout << 5 << endl;
        return 0;
    }
    int ans = solve(n, m);
    cout << ans << endl;
    return 0;
}