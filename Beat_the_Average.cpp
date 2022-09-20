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
        ll max;
        cin>>max;
        ll avg;
        cin>>avg;
        ll x=avg*n;
        if(max<=avg)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<x/(avg+1)<<endl;
        }
    }
    return 0;
}