#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    ll x = 0;
    ll y = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            if (count >= 1)
            {
                cout << "no" << endl;
                count++;
                break;
            }
            x = i + 1;
            while (a[i] > a[i + 1] && i != n - 1)
            {
                i++;
            }
            count = 1;
            y = i + 1;
        }
    }
    if (count <= 1)
    {
        if (x >= 2 and (a[y - 1] < a[x - 2]) and (x != 0 and y != 0))
        {

            cout << "no" << endl;
        }
        else if (y < n and (a[x - 1] > a[y] and (x != 0 and y != 0)))
        {
            cout << "no" << endl;
        }
        else if (x == 0 and y == 0)
        {
            cout << "yes" << endl;
            cout << 1 << " " << 1 << endl;
        }
        else
        {
            cout << "yes" << endl;
            cout << x << " " << y << endl;
        }
    }
    return 0;
}