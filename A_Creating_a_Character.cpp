#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        if (a < b)
        {
            ll dif = b - a;
            k = k - dif;
            if (k <= 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ll(ceil(k / 2.0)) << endl;
            }
        }
        else
        {
            ll dif=a-b;
            if(dif>k)
            {
                cout<<k+1<<endl;
            }
            else
            {
                k=k-dif;
                cout<<ll(dif+(ceil(k/2.0)))<<endl;
            }
        }
    }
    return 0;
}