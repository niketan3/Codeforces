#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n + 1];
    bool flag[100000 + 1] = {0};
    int sum[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sum[n] = 1;
    flag[arr[n]] = 1;
    for (int i = n - 1; i > 0; i--)
    {
        if (flag[arr[i]] == 0)
        {

            flag[arr[i]] = 1;
            sum[i] = sum[i + 1] + 1;
        }
        else
        {
            sum[i] = sum[i + 1];
        }
    }
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        cout<<sum[x]<<endl;
    }
    return 0;
}