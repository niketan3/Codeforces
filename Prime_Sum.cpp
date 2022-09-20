#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll prime(ll x, ll y)
{
    ll a = max(x, y);
    ll b = -1;
    ll f;
    for (ll i = 2; i <= sqrt(a); i++)
    {
        if (x % i == 0)
        {
            b = i;
            f = x / i;
        }
    }
    ll temp = min(x, y);
    if (b == -1)
    {
        return -1;
    }
    else
    {
        if(a%temp==0)
        {
            return a;
        }
    }
    ll re = -1;
    ll e;
    for (int i = 2; i <= b; i++)
    {
        if (temp % i == 0)
        {
            re = i;
            e = temp / x;
        }
    }
    if (re == -1)
    {
        return -1;
    }
    else
    {
        if (re == b)
        {
            return b;
        }
        else
        {
            if (f == e)
            {
                return b;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1 or b == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            ll x = prime(a, b);

            if (x == -1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}