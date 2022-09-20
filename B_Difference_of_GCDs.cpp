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
        ll l, r;
        cin >> l >> r;
        vector<ll> v;
        for (int i = 1; i <= n; i++)
        {
            if (r % i == 0)
            {
                v.push_back(r);
            }
            else
            {
                ll temp = (r / i) * i;
                if (temp >= l)
                {
                    v.push_back(temp);
                }
            }
        }
        if (v.size() == n)
        {
            cout << "YES" << endl;
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout << "NO" <<'\n';
        }
    }
    return 0;
}