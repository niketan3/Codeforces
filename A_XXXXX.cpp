#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll x;
        cin>>n>>x;
        int sum=0;
        int flag=0;
        ll arr[n];
        for (ll i=0;i<n;i++)
        {
            ll y;
            cin>>y;
            if(y%x!=0)
            {
                flag=1;
            }
            arr[i]=y;
            sum=sum+y;
        }
        if(sum%x!=0)
        {
            cout<<n<<endl;
        }
        else if(flag==1)
        {
            ll x1=n;
            ll x2=n;
            for (ll i=0;i<n;i++)
            {
                if(arr[i]%x==0)
                {
                    x1--;
                }
                else
                {
                    x1--;
                    break;
                }
            }
            for (ll i=n-1;i>=0;i--)
            {
                if(arr[i]%x==0)
                {
                    x2--;
                }
                else
                {
                    x2--;
                    break;
                }
            }
            cout<<max(x1,x2)<<endl;
            
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}