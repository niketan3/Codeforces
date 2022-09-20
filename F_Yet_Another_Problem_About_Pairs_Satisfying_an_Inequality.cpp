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
    
ll t;
cin>>t;
while(t--)
 {
    ll n;
    cin>>n;
    
    vector<pair<ll,ll>>v;
    ll ma=0;
    for(ll i=1;i<=n;i++)
    {
       ll x;
       cin>>x;
       if(x>ma)
       {
        ma=x;
       }
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());

    // for(auto x:v)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
   
    ll arr1[n+1]={0};
    for(auto x:v)
    {
        if((x.first<x.second))
        {
            arr1[x.first]++;
        }
    }
    
    for(ll i=n-1;i>=0;i--)
    {
        arr1[i]=arr1[i+1]+arr1[i];
    }
    // for(auto x:arr1)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    ll count=0;

    for(auto x:v)
    {
        if(x.first<x.second)
        {
            if(x.second<n)
            {
                count=count+arr1[x.second+1];
            }
        }
    }
    cout<<count<<endl;
 }
    return 0;
}