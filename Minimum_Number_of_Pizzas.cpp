#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll f,k;
        cin>>f>>k;
        cout<<((f*k)/(__gcd(f,k)))/k<<endl;
    }
    return 0;
}