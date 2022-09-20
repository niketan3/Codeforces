#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
struct temp
{
    ll index;
    ll ai;
    ll aj;

};
ll mod (ll x ,ll m)
{
    if(x<0)
    {
        ll temp=abs(x);
        return m-((temp)%m);
    }
    else
    {
        return x%m;
    }
}
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        temp arr1[n];
        temp arr2[n];

        ll m;
        cin>>m;
        ll max1=0;
        ll max2=0;
        ll a=0;
        ll b=0;
        for (int i=0;i<n;i++)
        {
            arr1[i].index=i;
            ll x;
            cin>>x;
            if(i==0)
            {
                continue;
                
            }
            arr1[i].ai=x+mod(x,m);
            arr1[i].aj=x-mod(x,m);
            if(arr1[i].ai>max1 and arr1[i].aj>max2)
            {
                if(max1+arr1[i].aj >max2+arr1[i].ai)
                {
                    max2=arr1[i].aj;
                }
                else{
                    max1=arr1[i].ai;
                }
            }
            else if(arr1[i].ai>max1)
            {
                max1=arr1[i].ai;
            }
            else if(arr1[i].aj>max2)
            {
                max2=arr1[i].aj;
            }

        }
        cout<<max1+max2<<endl;
    }
    return 0;
}