#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<ll>());
    ll arr1[n];
    arr1[0] = arr[0];
   
    for (int i = 1; i < n; i++)
    {
        arr1[i] = arr[i] + arr1[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << arr1[a-1] << endl;
        }
        else
        {
            cout<< arr1[a-1] - arr1[a-b-1]<<endl;
            
        }
    }
    return 0;
}