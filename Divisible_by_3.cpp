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
        ll m;
        cin>>m;
        if(n%3==0 or m%3==0)
        {
            cout<<0<<endl;
           
            continue;
        }
        if(n==m)
        {
            cout<<1<<endl;
            continue;
        }
        ll n1=n;
        ll m1=m;
       ll count=0;
        while(1)
        {
           if(n1%3==0 or m1%3==0)
           { 
               break;
           }
           else
           {
               count++;
               if(n1>m1)
               {
                   n1=abs(n1-m1);
               }
               else
               {
                   m1=abs(n1-m1);
               }
           }
        }
        cout<<count<<endl;

    }
    return 0;
}