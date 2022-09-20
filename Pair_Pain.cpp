#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll one=0;
        ll two=0;
        for (ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==1)
            {
                one++;
            }
            if(x==2)
            {
                two++;
            }
        }
        ll ans=0;
        ans=(one)*(n-1)-(one*(one-1)/2);
        ans=ans+((two*(two-1))/2);
        cout<<ans<<endl;
    }
    return 0;
}