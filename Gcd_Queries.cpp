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
    while (t--)
    {
        int n;
        cin >> n;
        int q;
        cin >> q;
        int arr[n + 1] = {0};
        int pre[n + 1] = {0};
        int suffix[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
            if (i == 1)
            {
                pre[i] = x;
            }
            else
            {
                pre[i] = __gcd(pre[i - 1], arr[i]);
            }
        }
        // int suffix[n+1];
        for (int i = n; i >= 1; i--)
        {
            if (i == n)
            {
                suffix[i] = arr[i];
            }
            else
            {
                suffix[i] = __gcd(suffix[i + 1], arr[i]);
            }
        }
        // for(auto x:suffix)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            int ans;
            if (a != 1)
            {
                if (b != n)
                {
                    ans = __gcd(pre[a - 1], suffix[b + 1]);
                }
                else
                {
                     ans = (pre[a - 1]);
                }
            }
            else
            {
                if (b != n)
                {
                     ans = ( suffix[b + 1]);
                }
                else
                {
                    ans=-1;   
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}