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
int dp[100005];
int solve(int arr[], int &n, int i, int rest, int prev)
{
    if (i >= n)
    {
        return rest;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    if (arr[i] == 0)
    {
        return dp[i] = solve(arr, n, i + 1, rest + 1, 0);
    }
    if (arr[i] == 1)
    {
        if (prev == 1)
        {
            return dp[i] = solve(arr, n, i + 1, rest + 1, 0);
        }
        else
        {
            int ans1 = solve(arr, n, i + 1, rest + 1, 0);
            int ans2 = solve(arr, n, i + 1, rest, 1);
            return dp[i] = min(ans1, ans2);
        }
    }
    if (arr[i] == 2)
    {
        if (prev == 2)
        {
            return dp[i] = solve(arr, n, i + 1, rest + 1, 0);
        }
        else
        {
            int ans1 = solve(arr, n, i + 1, rest + 1, 0);
            int ans2 = solve(arr, n, i + 1, rest, 2);
            return dp[i] = min(ans1, ans2);
        }
    }
    if (arr[i] == 3)
    {
        if (prev == 0)
        {
            int ans1 = solve(arr, n, i + 1, rest, 1);
            int ans2 = solve(arr, n, i + 1, rest, 2);
            return dp[i] = min(ans1, ans2);
        }
        if (prev == 1)
        {
            int ans2 = solve(arr, n, i + 1, rest + 1, 0);
            int ans1 = solve(arr, n, i + 1, rest, 2);
            return dp[i] = min(ans1, ans2);
        }
        if (prev == 2)
        {
            int ans1 = solve(arr, n, i + 1, rest + 1, 0);
            int ans2 = solve(arr, n, i + 1, rest, 1);
            return dp[i] = min(ans1, ans2);
        }
    }
}
int main()
{

    {
        memset(dp, -1, sizeof(dp));
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, n, 0, 0, -1);
    }
    return 0;
}