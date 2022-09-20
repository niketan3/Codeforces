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
        ll arr1[n];
        ll arr2[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        cout<<arr2[0]-arr1[0]<<" ";
        for(int i=1;i<n;i++)
        {
            ll m=max(arr1[i],arr2[i-1]);
            cout<<arr2[i]-m<<" ";
        }
        cout<<endl;
    }
    return 0;
}