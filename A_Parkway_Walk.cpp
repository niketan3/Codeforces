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
        ll e;
        cin>>e;
        ll sum=0;
        for (ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            sum=sum+x;
        }
        if(e>sum)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<sum-e<<endl;
        }
    }

    return 0;
}