#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<pair<ll, ll>> v;
    ll ma = 0;
    ll a1, b1;
    int index = 0;
    for (int i = 0; i < t; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
        if ((y - x) >= ma)
        {
            ma = y - x;
            a1 = x;
            b1 = y;
            index=i;
        }
    }
    for (int i = 0; i < t; i++)
    {
        if ((v[i].first >= a1) and (v[i].second <= b1))
        {
            continue;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout <<index+1<<endl;
    return 0;
}