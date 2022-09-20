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
        ll odd=0;
        ll even=0;
        for (int i=0;i<n;i++)
        {
            ll x;
            cin>>x;

            if(x%2==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        ll ans=INT_MAX;
        if(odd%2==0)
        {
            ans=odd/2;
        }
        cout<<min(ans,even)<<endl;
    }
    return 0;
}