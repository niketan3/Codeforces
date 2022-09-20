#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if(n==2)
        {
            cout<<0<<endl;
            continue;
        }
        if (n % 2 == 1)
        {
            ll x, y;
            x = n / 2;
            y = n / 2 + 1;
            cout << (x * y) / __gcd(x, y) - (__gcd(x, y)) << endl;
        }
        else
        {
            if ((n / 2) % 2 == 0)
            {
                ll x, y;
                x = n / 2 - 1;
                y = n / 2 + 1;
                cout << (x * y) / __gcd(x, y) - (__gcd(x, y)) << endl;
            }
            else
            {
                ll x, y;
                x = n / 2 - 2;
                y = n / 2 + 2;
                cout << (x * y) / __gcd(x, y) - (__gcd(x, y)) << endl;
            }
        }
        // ll max = 0;
        // for (ll i = 1; i < n; i++)
        // {
        //     if ((i * (n - i)) / __gcd(i, n - i) - (__gcd(i, n - i)) > max)
        //     {
        //         max = (i * (n - i)) / __gcd(i, n - i) - (__gcd(i, n - i));
        //     }
        // }
        // cout << max << endl;
    }
}