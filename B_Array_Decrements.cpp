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
        ll arr1[n];
        ll arr2[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        ll diff = 0;
        for (ll i = 0; i < n; i++)
        {

            if ((arr1[i] - arr2[i]) > diff)
            {
                diff = arr1[i] - arr2[i];
            }
        }

        int flag = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr1[i] < arr2[i])
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
            if (arr2[i] == 0)
            {
                int di = arr1[i];
                if (di > diff)
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            else if ((arr1[i] - arr2[i]) != diff)
            {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}