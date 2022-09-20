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
        ll n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        int max = 0;
        for (auto x : m)
        {
            if (x.second > max)
            {
                max = x.second;
            }
        }
        if(n==1 or n==2)
        {
            cout<<0<<endl;
        }
        else if(max==1)
        {
            cout<<n-2<<endl;
        }
        else
        {

            cout << n - max << endl;
        }
    }
    return 0;
}