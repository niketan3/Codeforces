#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
int main()
{
    ll t;
    cin >> t;
    ll arr[t];
    for(ll i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    ll count=0;
    for(int i=1;i<t;i++)
    {
        if(arr[i]<arr[i-1])
        {
             count=count+arr[i-1]-arr[i];
            arr[i]=arr[i-1];
           
        }
    }
    cout<<count<<endl;
    return 0;
}