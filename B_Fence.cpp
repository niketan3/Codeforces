#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum = sum + arr[i];
    }
    int ans = sum;
    int k = 0;
    for (int i = 1; i <= n - x; i++)
    {
        sum = sum - arr[i - 1];
        sum = sum + arr[i + x - 1];
        if (sum < ans)
        {
            ans = sum;
            k = i;
        }
    }
    cout << k + 1 << endl;
    return 0;
}