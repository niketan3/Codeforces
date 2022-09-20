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
    ll l,r;
    cin>>l>>r;
    if(l==r)
    {
        cout<<1<<endl;
    }
    else
    {
        ll diff=r-l+1;
        ll ans=r-l+1;
        ans=ans+((diff)*(diff-1))/2;
        cout<<ans<<endl;
    }
 }
    return 0;
}