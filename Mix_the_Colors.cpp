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
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    ll count=0;
    for(auto x:m)
    {
        count=count+x.second-1;
    }
    cout<<count<<endl;
 }
    return 0;
}