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
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        ll ans=(k*x);
        n=n-k;
        ans=ans+min(x,y)*n;
        cout<<ans<<endl;

    }
    return 0;
}