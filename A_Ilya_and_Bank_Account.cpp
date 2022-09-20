#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        n = -n;
        int last = n % 10;

        int secondlast = (n / 10) % 10;
        if (last > secondlast)
        {
            cout << (-n / 10);
        }
        else
        {
            string s = to_string(-n);
            s[s.length() - 2] = s[s.length() - 1];
            s[s.length() - 1] = '0';
            if (n <100 and n%10==0)
            {
                cout << 0 << endl;
            }
            else
            {
                for (int i = 0; i < s.length() - 1; i++)
                {
                    cout << s[i];
                }
            }
        }
    }
    return 0;
}