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
        ll n,m;
        cin>>n>>m;
       ll temp=m%n;
       ll ma=0;
       ll ans1,ans2;
       temp=min(temp,(m-temp));
       for(int i=n;(i<=(n+temp) and (i<=m));i++)
       {
            for(int j=m;j>=abs((m-temp));j--)
            {
                if((j-i)<ma)
                {
                    break;
                }
                if(j%i==0)
                {
                    if(abs(j-i)>=ma)
                    {
                        ma=abs(j-i);
                        ans1=i;
                        ans2=j;
                        // cout<<ans1<<" "<<ans2<<" "<<ma<<endl;
                    }
                }
            }
       }
       cout<<ans1<<" "<<ans2<<"\n";
    }
    return 0;
}