#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        int ma=0;
        int index;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>ma)
            {
                ma=arr[i];
                index=i;
            }
        }
        if(k>ma)
        {
            cout<<-1<<endl;
        }
        else if(k<=ma)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                int r=0;
                for(int j=i;j<index;j++)
                {
                    if(arr[j]^arr[])
                }
            }
        }
    }
    return 0;
}