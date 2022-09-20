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
        ll x;
        cin>>x;
        ll arr[n];
        for (ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll y=n/2;
        
        for (int i=0;i<y;i++)
        {
            if(arr[i]%x==0)
            {
                ll a=arr[i]/x;
                ll b=arr[i]*x;
                for (int j=0;j<n;j++)
                {
                    if(j==i)
                    {
                        continue;
                    }
                    if(arr[j]==a or arr[j]==b)
                    {
                        arr[i]=-1;
                        arr[j]=-1;
                        break;
                    }
                }
               
            }
            else
            {

                ll a=arr[i]*x;
                for (int j=y;j<n;j++)
                {
                    if(arr[j]==a)
                    {
                        arr[i]=-1;
                        arr[j]=-1;
                        break;
                    }
                }
            }
        }
        int count=0;
        for (int i=0;i<n;i++)
        {
            if(arr[i]!=-1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}