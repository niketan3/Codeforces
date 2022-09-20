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
    ll arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    ll k;
    cin>>k;
    // cout<<k<<endl;
    for(int i=9;i>=0;i--)
    {
        if(k>=arr[i])
        {
             k=k-arr[i];
            arr[i]=0;
           
            // cout<<k<<endl;
        }
    }
    
    for(int i=9;i>=0;i--)
    {
        // cout<<arr[i]<<" ";
        if(arr[i]!=0)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    // cout<<endl;
 }
    return 0;
}