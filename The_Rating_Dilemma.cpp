#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x >= 0)
        {
            cout << (x + 1) * -1 << endl;
        }
        else
        {
            cout << (-x + 1) * -1 << endl;
        }
    }
    return 0;
}