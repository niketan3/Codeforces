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
    ll arr[n];
    ll arr1[n];
    ll sum1=0;
    multiset<ll>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m.insert(arr[i]);
        sum1=sum1+arr[i];
    }
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr1[i];
        sum=sum+arr1[i];
    }
    // cout<<sum<<endl;
    ll mi=INT16_MAX;
    sort(arr,arr+n);
    sort(arr1,arr1+n);
    ll ans1=arr1[0]-arr[1];

    for(int i=0;i<n-1;i++)
    {
        ll temp=arr1[i]-ans1;
        auto it =m.find(temp);
        if(it==m.end())
        {
            ans1=0;
        }
    }
    if(ans1<=0 )
    {
        ans1=arr1[0]-arr[0];
    }
    cout<<ans1<<endl;
 }
    return 0;
}