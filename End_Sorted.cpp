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
    ll arr[n+1];
    int index1,indexn;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            index1=i;
        }
        if(arr[i]==n)
        {
            indexn=i;
        }
    }
    if(indexn<index1)
    {
        int ans=max(0,index1-1);
        int ans2=n-indexn;
        cout<<max(0,ans+ans2-1)<<endl;
    }
    else
    {
         int ans=max(0,index1-1);
        int ans2=n-indexn;
        cout<<max(0,ans+ans2)<<endl;
    }
 }
    return 0;
}