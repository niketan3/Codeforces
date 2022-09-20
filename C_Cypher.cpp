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
    int wheel;
    cin>>wheel;
    int arr[wheel];
    for(int i=0;i<wheel;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<wheel;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        if(count>=0)
        {
            if((arr[i]-count)<0)
            {
                cout<<(10-abs(arr[i]-count))%10<<" ";
            }
            else
            {
                cout<<(arr[i]-count)%10<<" ";
            }
        }
        else
        {
            int dest=arr[i]+(-1*count);
            if(dest<10)
            {
                cout<<dest<<" ";
            }
            else
            {
                cout<<(dest)%10<<" ";
            }
        }
        
    }
    cout<<endl;
 }
    return 0;
}