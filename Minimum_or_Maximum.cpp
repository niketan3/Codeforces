#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll min = INT32_MAX;
        ll max = 0;

        int flag = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ll x;
                cin >> x;
                min = x;
                max = x;
            }
            else
            {
                ll y;
                cin >> y;
                if (y >= max)
                {
                    max = y;
                }
                else if (y <= min)
                {
                    min = y;
                }
                else
                {
                    flag = 1;
                    cout << "NO" << endl;
                    
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}