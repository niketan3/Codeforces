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
        ll a[n];
        ll b[n];
        for (ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int count=0;
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                ll temp=a[i]^a[j];
                ll temp1=b[i]^b[j];
                if(temp==temp1)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}