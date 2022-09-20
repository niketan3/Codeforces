#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    bool flag[n + 1] = {0};
    vector<ll> arr;
    arr.push_back(-1);
    vector<ll> vec;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;

        arr.push_back(x);
        if ((x > 0 and x <= n) and flag[arr[i]] == 0)
        {
            flag[arr[i]] = 1;
        }
        else
        {
            vec.push_back(arr[i]);
        }
    }
    vector<ll> tp;
    for (ll i = 1; i <= n; i++)
    {
        if (flag[i] == 0)
        {
            tp.push_back(i);
        }
    }
    sort(vec.begin(), vec.end());
    ll count = 0;
    ll k = 0;
    for (ll i = 0; i < vec.size(); i++)
    {
        if (vec[i] < 0)
        {
            count = count + 0 - vec[i] + tp[k];
            k++;
            // cout<<count<<endl;
        }
        else
        {
            count = count + abs(tp[k] - vec[i]);
            k++;
            // cout<<vec[i]<<endl;
        }
    }
    cout << count << endl;
    return 0;
}