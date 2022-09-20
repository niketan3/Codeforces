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
        int lefma=0;
        int rightma=0;
        int topma=0;
        int bottomma=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            lefma=min(x,lefma);
            rightma=max(rightma,x);
            topma=max(topma,y);
            bottomma=min(bottomma,y);

        }
        cout<<2*abs(topma)+2*abs(bottomma)+2*abs(lefma)+2*abs(rightma)<<'\n';
    }
    return 0;
}