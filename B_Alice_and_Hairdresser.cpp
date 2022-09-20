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

    ll n, q, k;
    cin >> n >> q >> k;
    ll arr[n + 1];
    ll visited[n + 2];
    ll ans = 0;
    memset(visited, 0, sizeof(visited));
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] > k)
        {

            visited[i] = 1;
            if (visited[i - 1] == 1 and visited[i + 1] == 1)
            {
                ans--;
            }
            else if (visited[i - 1] == 0 and visited[i + 1] == 0)
            {
                ans++;
            }
        }
    }
    // for(auto x:visited)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<ans<<endl;
    int flag = 0;
    int i = 1;
    while (q--)
    {
        ll t;
        cin >> t;
        // cout << i << " : ";
        i++;
        if (t == 0)
        {
            if (flag == 0 and ans == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << max(1LL, ans) << endl;
                flag = 1;
            }
        }
        else
        {
            ll x, y;
            cin >> x >> y;

            // for (auto x : visited)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
            if (arr[x] > k)
            {
                arr[x] = arr[x] + y;
                continue;
            }
            arr[x] = arr[x] + y;
           
            if (arr[x] <= k)
            {
                continue;
            }
             visited[x] = 1;
            if (visited[x + 1] == 1 and visited[x - 1] == 1)
            {
                ans--;
            }
            else if (visited[x + 1] == 0 and visited[x - 1] == 0)
            {
                ans++;
            }
            // for (auto x : visited)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
        }
    }
    return 0;
}