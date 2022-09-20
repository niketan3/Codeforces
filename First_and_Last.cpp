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
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max=arr[0]+arr[n-1];
        for (int i=0;i<n-1;i++)
        {
            if(arr[i]+arr[i+1]>max)
            {
                max=arr[i]+arr[i+1];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}