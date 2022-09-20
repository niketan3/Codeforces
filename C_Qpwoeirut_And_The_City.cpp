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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll temp=n/2-1;
    if(n%2)
    {
        temp=n/2;
    }
    ll count=0;
    if(n==3)
    {
        ll s1=max(0LL,arr[0]+1-(arr[1]));
        ll s2=max(0LL,arr[2]+1-(arr[1]));
        cout<<max(s1,s2)<<endl;
        continue;
    }
    for(int i=1;i<n-2;i++)
    {
        ll s1=max(0LL,arr[i-1]+1-(arr[i]));
        ll s2=max(0LL,arr[i+1]+1-(arr[i]));
        ll s3=max(0LL,arr[i+2]+1-(arr[i+1]));
        ll s4=max(0LL,arr[i]+1-(arr[i+1]));
        // cout<<i<<endl;
        // cout<<s1<<" "<<s2<<endl;
        // cout<<s3<<" "<<s4<<endl;
        if(temp!=0 and i==n-2)
        {
            count=count+max(s1,s2);
        }
        else if(s1+s2==0)
        {
            i=i+1;
            temp--;
        }
        else if(s3+s4==0)
        {
          
            i=i+1;
            temp--;
        }
        else
        {
            count=count+min(max(s1,s2),max(s3,s4));
            if(min(s1+s2,s3+s4)==(s1+s2))
            {
                i=i+1;
            }
            else
            {
                i=i+2;
            }
            temp--;
        }
        cout<<count<<endl;
    }
    if(temp!=0)
    {
        if(arr[n-2]>arr[n-3] and arr[n-2]>arr[n-1])
        {
            
        }
       else
       {
         count=count+max(arr[n-3],arr[n-1])-arr[n-2]+1;
       }
    }
    cout<<count<<endl;
 }
    return 0;
}