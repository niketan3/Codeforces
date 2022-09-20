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
    ll u,v,a,s;
    cin>>u>>v>>a>>s;
    ll sq1=u*u;
    ll sq2=v*v;
    ll ans =sq1-(2*a*s);
    if(ans>sq2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
 }
    return 0;
}