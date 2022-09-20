#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll re1 = a % 3;
    ll re2 = b % 3;
    ll re3 = c % 3;
  
    if (re1 == 0 and re2 == 0 and re3 == 0)
    {
        cout << (a + b + c) / 3 << endl;
    }
    else
    {
        ll a1, b2, c3;
        a1 = a;
        b2 = b;
        c3 = c;
        if (re1 == 0 and a != 0)
        {
            a1 = a - 3;
            re1 = 3;
        }
        if (re2 == 0 and b != 0)
        {
            b2 = b - 3;
            re2 = 3;
        }
        if (re3 == 0 and c != 0)
        {
            c3 = c - 3;
            re3 = 3;
        }
        ll ans2=(a/3)+(b/3)+(c/3);
        ll ans;
        ans = (a1 / 3) + (b2 / 3) + (c3 / 3) + min(re1, min(re2, re3));
        // cout << ans <<" "<< min(re1, min(re2, re3))<<" "<<a1/3<<" "<<b2/3<<" "<<c3/3<< endl;
        cout<<(max(ans2,ans))<<endl;
    }
    return 0;
}