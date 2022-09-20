#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll fact(ll n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
ll lcm(ll a, ll b) { return a * b / __gcd(a, b); }
bool isPerfectSquare(ld x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    ll k = 1;
    while (test--)
    {
        cout << "Case #" << k << ':' << endl;
        k++;
        ll r, c;
        cin >> r >> c;
        for (ll i = 0; i < 2 * r; i++)
        {
            string str = "";
            for (int j = 0; j < 2 * c; j++)
            {
                if (i == 0 and j == 0)
                {
                    str = str + "..";
                    j++;
                }
                else if (i == 1 and j == 0)
                {
                    str = str + "..";
                    j++;
                }
                else if (i % 2 == 0 and j % 2 == 0)
                {
                    str = str + '+';
                }
                else if (i % 2 == 0 and j % 2 == 1)
                {
                    str = str + '-';
                }
                else if (i % 2 == 1 and j % 2 == 0)
                {
                    str = str + '|';
                }
                else
                {
                    str = str + '.';
                }
            }
            if (i % 2 == 0)
            {
                str = str+ '+';
            }
            else
            {
                str = str + '|';
            }
            cout << str << endl;
        }
        string s1 = "";
        for (ll j = 0; j <= c * 2; j++)
        {
            if (j % 2 == 0)
            {
                s1 = s1 + '+';
            }
            else
            {
                s1 = s1 + '-';
            }
        }
        cout << s1 << endl;
    }

    return 0;
}