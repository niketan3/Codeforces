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
        int x;
        cin >> x;
        int temp = 2 * n;
        int a[temp];
        int b[n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + temp);
        for (int i = n; i < 2 * n; i++)
        {
            b[i - n] = a[i];
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if ((b[i] - a[i]) < x)
            {
                flag = 0;
            }
        }

        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}