#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll max = 0;
    ll k, j;
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
}