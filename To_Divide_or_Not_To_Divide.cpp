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
        ll a,b,n;
        cin>>a>>b>>n;
        ll mi=min(a,b);
        ll ma=max(a,b);
        if(ma==a and (a%b)==0)
        {
            cout<<-1<<'\n';
        }
        else 
        {
            if(n%b!=0 and n%a==0)
            {
                cout<<n<<'\n';
            }
            else
            {
                ll tp=((n/a)+1)*a;
                if(tp%b==0)
                {
                    tp=tp+a;
                }
                cout<<tp<<"\n";
            }
        }
    }
    return 0;
}