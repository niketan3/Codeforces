#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        int i = 0;
        ll diff = abs(a - b);
        int count = 0;
        for (ll i = 1; i * i <= diff; i++)
        {
            if (diff % i == 0)
            {
                // cout << i << endl;
                if (i != diff / i)
                {
                    count++;
                }
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}