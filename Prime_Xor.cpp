#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll z = x ^ y;
        ll ma = max(x, max(y, z));
        ll po = log2(ma);
        int a, b, c;
        for (int i = pow(2, po); i < pow(2, po + 1); i++)
        {
            for (int j = pow(2, po); j < pow(2, po + 1); j++)
            {
                if (i ^ j == x)
                {
                    for (int k = pow(2, po); k < pow(2, po + 1); k++)
                    {
                        if (j ^ k == y)
                        {
                            a = i;
                            b = j;
                            c = k;
                        }
                    }
                }
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}