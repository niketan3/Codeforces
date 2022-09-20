#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll ans = 999999999999999999;
    ll arr[n];
    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        b[i] = 0;
    }

    for (ll i = 0; i < n; i++)
    {
        ll count = 0;
        for (ll j = 0; j < n; j++)
        {
            b[j] = 0;
        }
        for (ll j = i - 1; j >= 0; j--)
        {
            ll l=abs(b[j+1]/arr[j])+1;
            count=count+l;
            b[j]=-l*arr[j]; 
        }
        for (ll j = i + 1; j < n; j++)
        {
            ll l=abs(b[j-1]/arr[j])+1;
            count=count+l;
            b[j]=l*arr[j];
        }
        ans = min(ans, count);
    }
    cout << ans << endl;
    return 0;
}