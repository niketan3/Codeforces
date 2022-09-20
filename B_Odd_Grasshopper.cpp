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
        ll x, n;
        cin >> x >> n;
        if (x % 2 == 0)
        {
            int temp = n % 4;
            ll ans = 0;
            for (int i = 1; i <= temp; i++)
            {
                if (i ==1)
                {
                    ans = ans - (4*(n / 4) )-i;
                    // cout<<(n/4+i)<<endl;
                    // cout<<ans<<endl;
                }
                else if(i==2 or i==3)
                {
                    ans = ans + (4*(n / 4) + i);
                    // cout<<ans<<endl;
                }
            }
            // cout<<ans<<endl;
            cout << x + ans << "\n";
        }
        else
        {
            int temp = n % 4;
            ll ans = 0;
            for (int i = 1; i <= temp; i++)
            {
                if (i ==1)
                {
                    ans = ans + 4*(n / 4 )+i;
                }
                else if(i==2 or i==3)
                {
                    ans = ans -4*(n / 4 )-i;
                }
            }
            cout << x + ans << "\n";
        }
    }
    return 0;
}