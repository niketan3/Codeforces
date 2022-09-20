#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i != 0 and i != n - 1)
            {
                if (arr[i] > arr[i - 1] + arr[i + 1])
                {
                    count++;
                }
            }
        }
        if (k == 1)
        {
            cout << ceil((n - 2) / float(2))<<endl;
           
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}