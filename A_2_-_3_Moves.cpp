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
        cin>>n;
        if(n==1 )
        {
            cout<<2<<endl;
        }
        else if(n==2 or n==3)
        {
            cout<<1<<endl;
        }
        else
        {
            if(n%3==0)
            {
                cout<<n/3<<endl;
            }
            else
            {
                cout<<(n/3)+1<<endl;
            }
        }
    }
    return 0;
}