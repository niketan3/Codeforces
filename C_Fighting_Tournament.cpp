#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll pow1(int i)
{
    ll temp=10;
    for(int j=1;j<i;j++)
    {
        temp=temp*10;
    }
    cout<<temp<<endl;
    return temp;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll m;
        cin >> m;
        ll n = m;
    ll count = 0;
        while ((m / 10) != 0)
        {
            count++;
            m = m / 10;
        }
        // cout <<count<<endl;
        ll p = pow1(count);
        // cout << n - p << endl;
        cout << p << endl;
    }
}