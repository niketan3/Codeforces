#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
int main()
{
    int t;
    cin >> t;
    heap
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int j = i + 1;
            while (true)
            {
                ll temp = (arr[i] * j);
                int rada = temp - i;
                if(rada<0)
                {
                    continue;
                }
                if (rada > n)
                {
                    break;
                }
                if (arr[rada] * arr[i] == temp)
                {
                    count++;
                }
                j++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}