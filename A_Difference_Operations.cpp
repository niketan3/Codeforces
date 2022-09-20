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
    int n;
    cin>>n;
    ll a;
    cin>>a;
    int flag=1;
    for(int i=1;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x%a!=0)
        {
            flag=0;
        }
    }
    if(flag)
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