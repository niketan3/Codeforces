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
    int n,k;
    cin>>n>>k;
    int arr[300000]={0};
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        arr[x]=1;
    }
    for(int i=0;i<300000;i++)
    {
        if(arr[i]==0 and k!=0)
        {
            arr[i]=1;
            k--;
        }
        if(k==0)
        {
            break;
        }
    }
    for(int i=0;i<300000;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<endl;
            break;
            
        }
    }
 }
    return 0;
}