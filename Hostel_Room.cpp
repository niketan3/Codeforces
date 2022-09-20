#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long n, x;
    while (t--)
    {
        cin >> n >> x;
        long long c[201];
        long long sum = x;
        long long min = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            sum += c[i];

            if (sum > min)
            {
                min  = sum;
            }
        }
        cout << max(min, x) << endl;
    }
    return 0;
}