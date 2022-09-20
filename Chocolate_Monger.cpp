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
    ll n,x;
    cin>>n>>x;
    map<ll,ll>m;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    ll temp=0;
    for(auto y:m)
    {
        if(y.second>1)
        {
            temp=temp+(y.second-1);
            y.second=1;
        }
        if(temp>=x)
        {
            break;
        }
    }
    if(temp>=x)
    {
        cout<<m.size()<<endl;
    }
    else
    {
        int diff=x-temp;
        cout<<m.size()-diff<<endl;
    }
 }
    return 0;
}