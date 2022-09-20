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

    {
        ll n;
        cin >> n;
        ll arr[n];
        ll q;
        cin >> q;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll temp[n] = {0};
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                temp[i] = arr[i - 1] - arr[i];
            }
            else
            {
                temp[i] = 0;
            }
        }
        ll temp1[n] = {0};
        for (int i = n-2; i >=0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                temp1[i] = arr[i + 1] - arr[i];
            }
            else
            {
                temp1[i] = 0;
            }
        }
        // for(auto x:temp1)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        ll ans[n] = {0};
        ll ans1[n] = {0};
        
        for (int i = 1; i < n; i++)
        {
            ans[i] = ans[i - 1] + temp[i];
        }
        for (int i = n-2; i >=0; i--)
        {
            ans1[i] = ans1[i+ 1] + temp1[i];
        }
        // for (auto x : ans1)
        // {
        //     cout << x << " ";
        // }
        // cout<<endl;
        while (q--)
        {
            ll a1, b1;
            cin >> a1 >> b1;
            //  cout<<ans[b1-1]-ans[a1-1]<<endl;
            if(a1<=b1)
            {
                cout<<ans[b1-1]-ans[a1-1]<<endl;
            }
            else
            {
                cout<<ans1[b1-1]-ans1[a1-1]<<endl;
            }
        }
    }
    return 0;
}