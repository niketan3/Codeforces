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
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i%2 )
            {
               if(n%2)
               {
                    if(i!=n)
                    {
                         cout<<i+1<<" ";
                    }
               }
               else
            }
            else
            {
                cout<<i-1<<" ";
            }
            if(n%2 and i!=n)
            {

            }
        }
        // if()
    }
    return 0;
}