#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int cal(int n)
{
    int temp = 1;
    for (int i = 2; i <= n; i++)
    {
        temp = temp * i;
    }
    return temp;
}
int ncr(int n, int r)
{
    return cal(n) / (cal(r) * cal(n - 3));
}
int main()
{
    int n;
    cin >> n;
    ll d;
    cin >> d;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        auto it1 = v.begin() + i;
        auto it = lower_bound(it1, v.end(), v[i] + d);
        cout << it - it1 << endl;
        
    }
    // cout<<count<<endl;
    return 0;
}