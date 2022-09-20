#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        string a = "";
        string b = "";
        if (one == 0 or zero == 0)
        {
            cout << s << endl;
            cout << s << endl;
        }
        else if (one >= zero and zero != 0)
        {
            for (int i = 0; i < zero; i++)
            {
                a = a + '0';
            }
            for (int i = 0; i < one; i++)
            {
                a = a + '1';
            }
            int bhosadi = one / zero;
            if (zero == 1)
            {
                int ans = one / 2;
                if (ans % 2 == 0)
                {
                    for (int i = 0; i < ans; i++)
                    {
                        b = b + '1';
                    }
                    b = b + '0';
                    for (int i = 0; i < ans; i++)
                    {
                        b = b + '1';
                    }
                }
                else
                {
                    for (int i = 0; i <= ans; i++)
                    {
                        b = b + '1';
                    }
                    b = b + '0';
                    for (int i = 0; i < ans - 1; i++)
                    {
                        b = b + '1';
                    }
                    if (one % 2 == 1)
                    {
                        b = b + '1';
                    }
                }
            }
            else
            {
                while (one > 0 and zero > 0)
                {
                    for (int i = 0; i < bhosadi; i++)
                    {
                        b = b + '1';
                        one--;
                    }
                    b = b + '0';
                    zero--;
                }
            }

            cout << a << endl;
            cout << b << endl;
        }
        else if (zero > one and one != 0)
        {
            for (int i = 0; i < one; i++)
            {
                a = a + '1';
            }
            for (int i = 0; i < zero; i++)
            {
                a = a + '0';
            }
            int bhosadi = zero / one;
            int ans = zero / 2;
            if (one == 1)
            {

                if (ans % 2 == 0)
                {
                    for (int i = 0; i < ans; i++)
                    {
                        b = b + '0';
                    }
                    b = b + '1';
                    for (int i = 0; i < ans; i++)
                    {
                        b = b + '0';
                    }
                    if (ans % 2 != 0)
                    {
                        b = b + '0';
                    }
                }

                else
                {
                    for (int i = 0; i <= ans; i++)
                    {
                        b = b + '0';
                    }
                    b = b + '1';
                    for (int i = 0; i < ans - 1; i++)
                    {
                        b = b + '0';
                    }
                    if (ans % 2 != 0)
                    {
                        b = b + '0';
                    }
                }
            }
            else
            {
                while (one > 0 and zero > 0)
                {
                    for (int i = 0; i < bhosadi; i++)
                    {
                        b = b + '1';
                        one--;
                    }
                    b = b + '0';
                    zero--;
                }
            }
            cout << a << endl;
            cout << b << endl;
        }
    }
    return 0;
}
