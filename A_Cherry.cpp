#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll  t;
    cin>>t;
    while(t--)
    {
        ll  n;
        cin>>n;
        ll  arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll  mul=1;
        ll ans=0;
        for (ll  i=0;i<n-1;i++)
        {
            if(arr[i]*arr[i+1]>mul)
            {
                mul=arr[i]*arr[i+1];
            }
            ans =max(ans,mul);
        }
        cout<<ans<<endl;

    }
    return 0;
}