#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll b, c;
        cin >> b >> c;
        if (b % c == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << c / (__gcd(b, c)) << endl;
        }
    }
    return 0;
}