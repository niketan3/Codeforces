#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 0;
    int k, j;
    if (n % 2 == 1)
    {
        int x, y;
        x = n / 2;
        y = n / 2 + 1;
        cout << (x * y) / __gcd(x, y) - (__gcd(x, y)) << endl;
    }
    else
    {
        if ((n / 2) % 2 == 0)
        {
            int x, y;
            x = n / 2 - 1;
            y = n / 2 + 1;
            cout << (x * y) / __gcd(x, y) - (__gcd(x, y)) << endl;
        }
        else
        {
            int x, y;
            x = n / 2-2;
            y = n / 2 +2;
            cout << (x * y) / __gcd(x, y) - (__gcd(x, y)) << endl;
        }
    }
    // for (int i = 0; i < n; i++)
    // {

    //     // cout<<i<<" : "<<(i*(n-i))/__gcd(i,n-i)-(__gcd(i,n-i))<<endl;
    //     if ((i * (n - i)) / __gcd(i, n - i) - (__gcd(i, n - i)) > max)
    //     {
    //         max = (i * (n - i)) / __gcd(i, n - i) - (__gcd(i, n - i));
    //         k = i;
    //         j = n - i;
    //     }
    // }
    // cout << max << " " << k << " "
    //      << " " << j << endl;
    return 0;
}