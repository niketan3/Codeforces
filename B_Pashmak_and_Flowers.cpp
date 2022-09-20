#include<bits/stdc++.h>
 typedef long long ll; 
using namespace std;
int main (){
    ll n;
    cin>>n;
    map<ll,ll> m;
    for (int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    auto x=m.begin();
    ll a=(*x).first;
    ll a1=(*x).second;
    auto y=m.end();
    y--;
    ll b=(*y).first;
    ll b1=(*y).second;
    if(y==x)
    {
        cout<<0<<" "<<(a1*(a1-1))/2<<endl;
        return 0;
    }
    cout<<b-a<<" ";
    cout<<b1*a1<<endl;
    return 0;
}