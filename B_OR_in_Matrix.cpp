#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                h = 1;
            }
        }
    }
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = 0;
        }
    }
    int ans1[m];
    for (int i = 0; i < m; i++)
    {
        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == 0)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            ans1[i] = 1;
        }
        else
        {
            ans1[i] = 0;
        }
    }
    int temp[n][m];
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ans[i] == 1 and ans1[j] == 1)
            {
                temp[i][j] = 1;
                r = 1;
            }
            else
            {
                temp[i][j] = 0;
            }
        }
    }
    int g[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            g[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (temp[i][j] == 1)
            {
                for (int k = 0; k < m; k++)
                {
                    g[i][k] = 1;
                }
                for (int k = 0; k < n; k++)
                {
                    g[k][j] = 1;
                }
            }
        }
    }
    int gk = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (arr[i][j] != g[i][j])
            {

                gk = 0;
            }
        }
    }
    if (gk)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
               cout<<temp[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}