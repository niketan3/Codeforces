#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 == 1 and y % 2 == 1)
        {
            cout << -1 << endl;
        }
        else if(x==1 or y==1)
        {
            cout<<-1<<endl;
        }
        else if (x % 2 == 1 or y % 2 == 1)
        {
            if (x % 2 == 1)
            {
                for (int i = 0; i < y / 2; i++)
                {
                    cout << 'b';
                }
                for (int i = 0; i < x; i++)
                {
                    cout << 'a';
                }
                for (int i = 0; i < y / 2; i++)
                {
                    cout << 'b';
                }
                cout << endl;
                if (x > y)
                {
                    for (int i = 0; i < y; i++)
                    {
                        if (i % 2 == 0)
                        {
                            cout << 'b';
                        }
                        else
                        {
                            cout << 'a';
                        }
                    }
                    for (int i = 0; i < (x - y); i++)
                    {
                        cout << 'a';
                    }
                    for (int i = 0; i < y; i++)
                    {
                        if (i % 2 == 1)
                        {
                            cout << 'b';
                        }
                        else
                        {
                            cout << 'a';
                        }
                    }
                    cout << endl;
                }
                else
                {
                    for (int i = 0; i < (x - 1); i++)
                    {
                        if (i % 2 == 0)
                        {
                            cout << 'b';
                        }
                        else
                        {
                            cout << 'a';
                        }
                    }

                    for (int i = 0; i < (y - x + 1) / 2; i++)
                    {
                        cout << 'b';
                    }
                    cout << 'a';
                    for (int i = 0; i < (y - x + 1) / 2; i++)
                    {
                        cout << 'b';
                    }
                    for (int i = 0; i < (x - 1); i++)
                    {
                        if (i % 2 == 1)
                        {
                            cout << 'b';
                        }
                        else
                        {
                            cout << 'a';
                        }
                    }
                    cout << endl;
                }
            }

            else
            {

                for (int i = 0; i < x / 2; i++)
                {
                    cout << 'a';
                }
                for (int i = 0; i < y; i++)
                {
                    cout << 'b';
                }
                for (int i = 0; i < x / 2; i++)
                {
                    cout << 'a';
                }
                cout << endl;
                if (y > x)
                {
                    for (int i = 0; i < x; i++)
                    {
                        if (i % 2 == 0)
                        {
                            cout << 'a';
                        }
                        else
                        {
                            cout << 'b';
                        }
                    }
                    for (int i = 0; i < (y - x); i++)
                    {
                        cout << 'b';
                    }
                    for (int i = 0; i < x; i++)
                    {
                        if (i % 2 == 1)
                        {
                            cout << 'a';
                        }
                        else
                        {
                            cout << 'b';
                        }
                    }
                    cout << endl;
                }
                else
                {
                    for (int i = 0; i < (y - 1); i++)
                    {
                        if (i % 2 == 0)
                        {
                            cout << 'a';
                        }
                        else
                        {
                            cout << 'b';
                        }
                    }

                    for (int i = 0; i < (x - y + 1) / 2; i++)
                    {
                        cout << 'a';
                    }
                    cout << 'b';
                    for (int i = 0; i < (x - y + 1) / 2; i++)
                    {
                        cout << 'a';
                    }
                    for (int i = 0; i < (y - 1); i++)
                    {
                        if (i % 2 == 1)
                        {
                            cout << 'a';
                        }
                        else
                        {
                            cout << 'b';
                        }
                    }
                    cout << endl;
                }
            }
        }

        else
        {
            for (int i = 0; i < x / 2; i++)
            {
                cout << 'a';
            }
            for (int i = 0; i < y; i++)
            {
                cout << 'b';
            }
            for (int i = 0; i < x / 2; i++)
            {
                cout << 'a';
            }
            cout << endl;

            if (y >= x)
            {
                // cout<<"Hi";
                for (int i = 0; i < x; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << 'b';
                    }
                    else
                    {
                        cout << 'a';
                    }
                }
                for (int i = 0; i < (y - x); i++)
                {
                    cout << 'b';
                }
                for (int i = 0; i < x; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << 'a';
                    }
                    else
                    {
                        cout << 'b';
                    }
                }
                cout << endl;
            }
            else if (x > y)
            {

                for (int i = 0; i < y; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << 'a';
                    }
                    else
                    {
                        cout << 'b';
                    }
                }
                for (int i = 0; i < (x - y); i++)
                {
                    cout << 'a';
                }
                for (int i = 0; i < y; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << 'b';
                    }
                    else
                    {
                        cout << 'a';
                    }
                }
                cout << endl;
            }
        }
    }
    
    return 0;
}