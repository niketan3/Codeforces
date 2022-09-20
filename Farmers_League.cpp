#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if(n==2)
        {
            cout<<3<<endl;
        }
        if (n > 2)
        {

            
            ll no = n * (n - 1) / 2;
            ll wp = (n - 1) * 3;
            ll re = no - (n - 1);
            ll rp = re * 3;
            ll ans = rp / (n - 1);
            cout << wp - ans << endl;
        }
    }
    return 0;
}