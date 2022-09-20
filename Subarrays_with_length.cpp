#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class ans
{
public:
    ll present;
    ll element;

    ans()
    {
        element = 0;
        present = 0;
    }
};
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ans array[n + 1];
        ll count = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll inp;
            cin >> inp;
            if (array[inp].present == 0)
            {
                int u = min(min(inp, n - i + 1), min(i, n - inp + 1));
                count = count + min(min(inp, n - i + 1), min(i, n - inp + 1));
                // cout<<i<<":"<<u<<endl;
                array[inp].present = 1;
                array[inp].element = i;
            }

            else
            {
                if ((i - array[inp].element < inp))
                {
                    
                    ll temp1=max(0ll,n - inp);
                    ll temp=max(0ll,(i-array[inp].element));
                    ll x=n-array[inp].element;
                    ll y;
                    if(x<inp)
                    {
                        y=0;
                    }
                    else
                    {
                        y=x+1-inp;
                    }
                    ll u = min(temp, min(n-i,min(y,temp1)));
                    // cout<<i<<":"<<u<<endl;
                    count = count + u;
                    array[inp].element=i;
                }
                else
                {
                    ll temp1=max(0ll,n-i+1);
                    ll temp2=max(0ll,n-inp+1);
                    ll u = min(min(inp, temp1), min(i, temp2));
                    // cout<<i<<":"<<u<<endl;
                    count = count + u;
                    array[inp].element=i;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}