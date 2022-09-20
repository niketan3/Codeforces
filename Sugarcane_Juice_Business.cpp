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
        ll profit=n*50;
        ll sugar=n*10;
        ll salt=n*10;
        ll rent=15*n;
        cout<<profit-(2*sugar)-rent<<endl;
        
    }
    return 0;
}