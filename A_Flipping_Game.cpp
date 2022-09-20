#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int l, int r)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= l && i <= r)
        {
            if (arr[i] == 0)
            {
                c++;
            }
        }
        else
        {
            if (arr[i] == 1)
            {
                c++;
            }
        }
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int onec = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            onec++;
        }
    }
    if (onec == n)
    {
        cout << n - 1 << endl;
        return 0;
    }
    if (n == 1 && arr[0] == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n == 1 && arr[0] == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ma = max(ma, solve(arr, n, i, j));
        }
    }
    cout << ma << endl;
    return 0;
}