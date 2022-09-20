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
    ll n,k;
    cin>>n>>k;
    if(k>=n)
    {
        cout<<n<<endl;
    }
    else
    {
        ll diff=n-k;
        if(diff%3==0)
        {
            cout<<max(0LL,k-(diff/3))<<endl;
        }
        else
        {
            cout<<max(0LL,k-(diff/3)-1)<<endl;
        }
    }
 }
    return 0;
}