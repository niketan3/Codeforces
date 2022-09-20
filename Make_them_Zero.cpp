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
        int index[50]={0};
        ll arr[n];
        for (ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (ll i=0;i<n;i++)
        {
            ll temp=log2(arr[i]);
            while(arr[i]>0)
            {
                arr[i]=arr[i]-pow(2,temp);
                index[temp]=1;
                temp=log2(arr[i]);
            }
        }
        int count=0;
        for (int i=0;i<50;i++)
        {
            if(index[i]==1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}