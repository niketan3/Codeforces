#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        ll b;
        cin>>b;
        ll diff=b-a;
        if(diff%3==0 or diff%3==1)
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