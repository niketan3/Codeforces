#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{   if (b == 0) return 1;
ll resp = binaryExp(a, b / 2);
if (b & 1) // b is odd
return a * (resp)*resp;
else
return resp * resp;
}
int main (){
int t;
cin>>t;
while(t--)
 {
    ll n;
    cin>>n;
    map<ll,ll>m;
    ll ma=0;
    ll mi=0;
    for(ll i=0;i<n;i++)
    {
        ll h;
        cin>>h;
        if(h>ma)
        {
            ma=h;
        }
        m[h]++;
    }
    ll count=0;
    for(auto x:m)
    {
        if(x.second>mi and x.second!=1) 
        {
            mi=x.second;
        }
        if(x.second==1)
        {
            count++;
        }
    }
    if(m[ma]==1 and count==1)
    {
       if(mi==2)
       {
        cout<<mi<<endl;
       }
       else
       {
            cout<<1<<endl;
       }
    }
   else if(count%2==0)
    {
        cout<<count/2<<endl;
    }
    else
    {
        cout<<(count/2)+1<<endl;
    }
 }
    return 0;
}