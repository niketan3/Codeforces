#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        int diff = abs(a - b);
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {

            if ((diff & a) != 0 and a < x)
            {
                cout << -1 << endl;
            }
            else if (diff < x)
            {
                cout << 1 << endl;
            }
            else
            {
                int count = 0;
                int flag = 1;
                while (diff != 0)
                {
                    int temp = log2(diff);
                    if (pow(2, temp) >= x)
                    {
                        flag = 0;
                        cout << -1 << endl;
                        break;
                    }
                    diff = diff - pow(2, temp);
                    count++;
                    if (diff < x)
                    {
                        coun
            }
        }
        else
        {
            if ((a | diff) != 0)
            {
                cout << -1 << endl;
            }
            else if (diff < x)
            {
                cout << 1 << endl;
            }
            else
            {
                int count = 0;
                int flag = 1;
                while (diff != 0)
                {
                    int temp = log2(diff);
                    if (pow(2, temp) >= x)
                    {
                        flag = 0;
                        cout << -1 << endl;
                        break;
                    }
                    diff = diff - pow(2, temp);
                    count++;
                    if (diff < x)
                    {
                        count++;
                        break;
                    }
                }
                if (flag)
                {
                    cout << count << endl;
                }
            }
        }
    }
}
