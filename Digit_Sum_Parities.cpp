#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int digitsum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int m;
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = digitsum(n);
        int sum1 = digitsum(n + 1);
        // cout<<n+1<<endl;
        // cout<<sum1<<endl;
        if (sum % 2 == 0)
        {
            int sum2 = digitsum(n + 2);
            if (sum1 % 2 == 1)
            {
                cout << n + 1 << endl;
            }
            else
            {
                if (sum2 % 2 == 1)
                {
                    cout << n + 2 << endl;
                }
            }
        }
        else
        {
            int sum2 = digitsum(n + 2);
            if (sum1 % 2 == 0)
            {
                cout << n + 1 << endl;
            }
            else
            {
                if (sum2 % 2 == 0)
                {
                    cout << n + 2 << endl;
                }
            }
        }
    }

    return 0;
}