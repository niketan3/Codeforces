#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int dp[1000007][10];

int mul(int n)
{
    int m = 1;
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            m = m * (n % 10);
        }
        n = n / 10;
    }
    return m;
}
int solve(int l, int k, int count)
{
    if (l < 10 and l != k)
    {
        return -1;
    }
    else if (l < 10 and l == k)
    {
        return  count;
    }
    if(dp[l][k]!=-1)
    {
        return dp[l][k];
    }
    l = mul(l);
     return dp [l][k]=solve(l, k, count + 1);
}
int main()
{
    int t;
    cin >> t;
    memset(dp,-1,sizeof(dp));
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int count = 0;
        for (int i = l; i <= r; i++)
        {
            if (solve(i, k, 0) != -1)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}