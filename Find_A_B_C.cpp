#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int higestpower(int n)
{
    for(int i=n;i>=1;i--)
    {
        if((i&(i-1))==0)
        {
            return i;
        }
    }
}
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
    ll arr[n+1];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    ll temp[3]={0,0,0};
    for(int i=higestpower(n);i>0;i/=2)
    {
        ll temp1=arr[i]-arr[0];
        if(temp1<0)
        {
            temp1=temp1*(-1);
            int ct=temp1/i;
            if(ct==1)
            {
                ct=2;
                if((temp[0]^i)<=n)
                {
                    temp[0]=temp[0]^i;
                    ct--;
                }
                if(ct and (temp[1]^i)<=n)
                {
                    temp[1]=temp[1]^i;
                    ct--;
                }
                if(ct>0 and (temp[2]^i)<=n) temp[2]^=i;
            }
            else if(ct==3)
            {
                temp[0]=temp[0]^i;
                temp[1]=temp[1]^i;
                temp[2]=temp[2]^i;
            }
        }
        else
        {
            int ct=temp1/i;
            if(ct==1)
            {
                if((temp[0]^i)<=n)temp[0]=temp[0]^i;
                else if((temp[1]^i)<=n)temp[1]=temp[1]^i;
                else temp[2]=temp[2]^i;
            }
        }
       sort(temp,temp+3);
        
    }
     
    cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
 }
    return 0;
}