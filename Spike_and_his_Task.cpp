#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        int count = 0;
        int in = '0';

        int one = 0;
        int zero = 0;
        for (int i = 0; i < size; i++)
        {

            if (in != s[i])
            {
                if (s[i] == '0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }

                count++;
                // flag = 0;
            }
            if (in == '0')
            {
                in = '1';
            }
            else
            {
                in = '0';
            }
        }
        if (count > size)
        {
            one=0;
            zero=0;
            count=0;
            int in='1';
            for (int i = 0; i < size; i++)
            {

                if (in != s[i])
                {
                    if (s[i] == '0')
                    {
                        zero++;
                    }
                    else
                    {
                        one++;
                    }

                    count++;
                    // flag = 0;
                }
                if (in == '0')
                {
                    in = '1';
                }
                else
                {
                    in = '0';
                }
            }
        }
        if (one == zero)
        {
            cout << count - one << endl;
        }
        else
        {
            if (one > zero)
            {
                count = count - zero;
            }
            else
            {
                count = count - zero;
            }
            cout << count << endl;
        }
    }
    return 0;
}