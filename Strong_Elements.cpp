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
        ll arr[n];
        ll pregcd[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                pregcd[i] = arr[i];
            }
            else
            {
                pregcd[i] = __gcd(pregcd[i - 1], arr[i]);
            }
        }
        ll backgcd[n];
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                backgcd[i] = arr[i];
            }
            else
            {
                backgcd[i] = __gcd(backgcd[i + 1], arr[i]);
            }
        }
        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (__gcd(pregcd[i - 1], backgcd[i + 1]) != 1)
            {
                count++;
            }
        }
        if (backgcd[1] != 1)
        {
            count++;
        }
        if (pregcd[n - 2] != 1)
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}