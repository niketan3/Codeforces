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
    ll a,b,p,q;
    cin>>a>>b>>p>>q;
    if(p%a!=0)
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(q%b!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll re1=p/a;
        ll re2=q/b;
        // cout<<re1<<" "<<re2<<endl;
        if(abs(re1-re2)<=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 }
    return 0;
}