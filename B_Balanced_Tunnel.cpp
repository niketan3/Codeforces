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
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int ans = 0;
    int i = 0;
    int j = 0;
    int visited[n + 1] = {0};
    // cout<<"HI\n";
    while (i < n and j < n)
    {
        if (arr[i] == arr1[j])
        {
            visited[arr[i]] = 1;
            i++;
            j++;
        }
        else if (visited[arr[i]] == 1)
        {
            i++;
        }
        else
        {
            ans++;
            visited[arr1[j]] = 1;
            j++;
        }
    }
    cout << ans << endl;

    return 0;
}