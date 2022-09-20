#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 2);
    v[0] = 0;
    v[n + 1] = 0;
    vector<int> res(n + 2);
    res[0] = 0;
    res[n + 1] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> res[i];
        v[i] = 0;
    }
    sort(res.begin(), res.end(), greater<int>());
    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        v[l] += 1;
        v[r + 1] -= 1; 
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    for (int i = 1; i <= n + 1; i++)
    {
        v[i] = v[i] + v[i - 1];
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v[0] = 0;
    ll sum = 0;

    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i <= n + 1; i++)
    {
        // cout<<v[i]<<endl;
        if (v[i] >= 1 && res[i] >= 1)
        {
            sum += res[i] * v[i];
        }
    }
    cout << sum << endl;
}