#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll a,b;
        cin>>a>>b;
        if(a<=b/2)
        {
            cout<<(x+y)*a<<endl;
        }
        else
        {
            ll v=min(x,y);
            ll ans=v*b;
            ans=ans+((max(x,y)-v)*a);
            cout<<ans<<endl;
        }
    }
    return 0;
}