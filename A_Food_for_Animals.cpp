#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x,y;
        cin>>x>>y;
        ll ans1=0;
        // cout<<x<<" "<<a<<endl;
        if(x>a)
        {
            // cout<<"HI";
            ans1=x-a;
            // cout<<ans1<<endl;
        }
        // cout<<ans1<<endl;
        if(y>b)
        {
            ans1=ans1+(y-b);
        }
        // cout<<ans1<<endl;
        if(ans1<=c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}