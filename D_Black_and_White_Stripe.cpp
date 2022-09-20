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
        int x;
        cin>>x;
        if(n%6==0)
        {
            cout<<(n/6)*x<<endl;
        }
        else
        {
            cout<<(n/6+1)*x<<endl;
        }
    }
    return 0;
}