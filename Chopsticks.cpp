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
    ll n,d;
    cin>>n>>d;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll count=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i+1]-arr[i])<=d)
        {
            count++;
            i++;
        }
    }
    cout<<count<<endl;
    return 0;
}