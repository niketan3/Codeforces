#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 and b == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else if (a == 0 or b == 0)
        {
            cout << -1 << endl;
            continue;
        }
        ll d = max(a, b) % min(a, b);
        ll count = 0;

        if (d == 0 and min(a, b) != 1)
        {

            if (d == 0)
            {
                ll temp = max(a, b) / min(a, b);
                if (!(temp & (temp - 1)))
                {
                    ll f = log2(temp);
                    count = count + f;
                    count = count + max(a, b);
                }
            }
        }
        else
        {
            while (a != 0 and b != 0)
            {
                if (a == b)
                {
                    count = count + a;
                    break;
                }
                ll t1 = log2(max(a, b));
                ll t2 = log2(min(a, b));
                cout<<a<<" "<<b<<endl;
                if (t1 == t2)
                {
                    ll t3 = pow(2, t2);
                    if (t3 == min(a, b))
                    {
                        t3 = pow(2, t2 - 1);
                    }
                    ll diff = min(a, b) - t3;
                    count = count + diff;
                    a = a - diff;
                    b = b - diff;
                }
                else
                {
                    ll diff1 = t1 - t2;
                    count = count + diff1;
                    ll y = pow(2, diff1);
                    if (min(a, b) == a)
                    {
                        a = a * y;
                    }
                    else
                    {
                        b = b * y;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}