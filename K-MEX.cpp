#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n];
        int arr1[105] = {0};
        int c=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr1[arr[i]] = 1;
            if(arr[i]==k)
            {
                c++;
            }
        }
        int flag = 1;
        for (int i = 0; i < k; i++)
        {
            if (arr1[i] == 0)
            {
                flag = 0;
            }
        }
        if(m<k)
        {
            flag=0;
        }
        else if((n-c)<m)
        {
            flag=0;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}