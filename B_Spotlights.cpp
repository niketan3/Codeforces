#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    int arrl[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            if (j == 0)
            {
                arrl[i][j] = arr[i][j];
            }
            else
            {
                arrl[i][j]=arrl[i][j-1]|arr[i][j];
            }
        }
    }
   
    int arrr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = c - 1; j >= 0; j--)
        {
            if (j == c - 1)
            {
                arrr[i][j] = arr[i][j];
            }
            else
            {
                arrr[i][j] = arr[i][j] | arrr[i][j + 1];
            }
        }
    }

    int arrd[r][c];

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (j == 0)
            {
                arrd[j][i] = arr[j][i];
            }
            else
            {
                arrd[j][i] = arr[j][i] | arrd[j - 1][i];
            }
        }
    }
    int arru[r][c];
    for (int i = 0; i < c; i++)
    {
        for (int j = r - 1; j >= 0; j--)
        {
            if (j == r - 1)
            {

                arru[j][i] = arr[j][i];
            }
            else
            {
                arru[j][i] = arr[j][i] | arru[j + 1][i];
            }
        }
    }
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j]==0)
            {
                if (arrl[i][j] == 1)
                {
                    count++;
                }
                if (arrd[i][j] == 1)
                {
                    count++;
                }
                if (arrr[i][j] == 1)
                {
                    count++;
                }
                if (arru[i][j] == 1)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}