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
        int count=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i==0)
            {
                continue;
            }
            else
            {
                if(arr[i]==arr[i-1])
                {
                    count++;
                    arr[i-1]=-1;
                }
            }
        }
        cout<<n-count<<endl;
    }
    return 0;
}