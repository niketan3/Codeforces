#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll min=INT16_MAX;
        for (ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            arr[i]=x;
            if(x<min)
            {
                min =x;
            }
        }
        int flag=0;
        int flag1=0;
        int y=0;
        for (ll i=0;i<n;i++)
        {
            for (ll j=i+1;j<n;j++)
            {
                if(__gcd(arr[i],arr[j])==min and (arr[j]<arr[i]))
                {
                    swap(arr[i],arr[j]);
                    flag1=1;
                }
                if(arr[j]<arr[i])
                {
                    flag=1;
                }
            }
            if(flag1==0 and flag==1)
            {
                y=1;
                cout<<"NO"<<endl;
                break;
            }
            
        }
        if(!y)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}