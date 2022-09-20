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
void solve(vector<ll> graph[], ll n)
{

    queue<ll> q;
    q.push(1);
    ll zero = 0;
    ll one = 1;
    ll arr[n + 1];
    memset(arr, -1, sizeof(arr));
    arr[1] = 1;
    while (!q.empty())
    {
        ll p = q.front();
        q.pop();
        for (auto x : graph[p])
        {
            if (arr[x] == -1)
            {
                // cout << p << " " << x << endl;
                arr[x] = (arr[p] ^ 1);
                if ((arr[p] ^ 1) == 0)
                {
                    zero++;
                }
                else
                {
                    one++;
                }
                q.push(x);
            }
        }
    }
    // cout << one << " " << zero << "\n";
    cout << (one * zero - (n-1)) << endl;
}
int main()
{

    ll n;
    cin >> n;
    vector<ll> graph[n + 1];
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    // cout<<"H"
    solve(graph, n);

    return 0;
}