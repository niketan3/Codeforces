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
        if (n==1)
        {
            cout<<0<<endl;
        }
        else if(n>1 and n<5)
        {
            cout<<1<<endl;
        }
       else  if(n%5==0 or (n%5==1))
        {
            cout<<(n/5)*2<<endl;
        }
        else
        {
            cout<<((n/5)*2)+1<<endl;
        }
    }
    return 0;
}