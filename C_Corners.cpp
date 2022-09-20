#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int connect = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '1')
                {
                    one++;
                }
                if (i + 1 < n)
                {
                    if (v[i][j] == '0' and v[i + 1][j] == '0')
                    {
                        connect = 2;
                    }
                }
                if (i + 1 < n and j + 1 < m)
                {
                    if (v[i][j] == '0' and v[i + 1][j + 1] == '0')
                    {
                        connect = 2;
                    }
                }
                if (i + 1 < n and j - 1 >= 0)
                {
                    if (v[i][j] == '0' and v[i + 1][j - 1] == '0')
                    {
                        connect = 2;
                    }
                }
                if (j + 1 < n)
                {
                    if (v[i][j] == '0' and v[i][j + 1] == '0')
                    {
                        connect = 2;
                    }
                }
                if (v[i][j] == '0')
                {
                    connect = max(connect, 1);
                }
            }
        }
        // cout << one << " ";
        // cout<<connect<<" ";
        if (connect == 0)
        {
            cout << max(0, one - 2) << endl;
        }
        else if (connect == 1)
        {
            cout << max(0, one-1) << endl;
        }
        else
        {
            cout << one << endl;
        }
    }
}