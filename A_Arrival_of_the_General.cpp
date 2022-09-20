#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s, b;
    int si, bi;
    s = 200;
    b = -1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b)
        {
            b = arr[i];
            bi = i;
        }
        if (arr[i] <= s)
        {
            s = arr[i];
            si = i;
        }
    }
    if (bi >= si)
    {
        cout << bi + (n - 1 - si) - 1;
    }
    else
    {
        cout << bi + n - 1 - si;
    }
    return 0;
}