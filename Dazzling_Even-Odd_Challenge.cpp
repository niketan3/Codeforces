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
        ll osum=0;
        ll esum=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x%2==0)
            {
                osum=osum+x;
            }
            else
            {
                esum+=x;
            }
        }
        if(osum%(n/2)==0 and esum%(n/2)==0)
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