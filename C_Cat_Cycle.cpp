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
        
        ll n, k;
        cin >> n >> k;
        k--;
        if (n % 2 == 0)
        {
                cout << 1+ k  % n << endl;
        }
        else
        {
            ll temp=k/((n-1)/2);
            cout<<1+(k+temp) % n<<endl;

        }
    }
    return 0;
}