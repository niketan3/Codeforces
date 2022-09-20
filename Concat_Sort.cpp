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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        bool used[n];
        ll unsor[n];
        ll tp;
        for (int i = 0; i < n; i++)
        {
            cin >> tp;
            arr[i] = tp;
            used[i] = false;
            unsor[i] = tp;
        }
        sort(arr, arr + n);
        int ind = 0;
        // int sec = 0;
        int c = 0;
        for (int sec = 0; sec < (2 * n); sec++)
        {
            if (unsor[sec % n] == arr[ind] && !used[sec % n])
            {
                used[sec % n] = true;
                c++;
                ind++;
            }
        }
        // cout << c << endl;
        if (c == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}