#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
bool cmp(pair<ll,ll>p1 ,pair<ll,ll>p2)
{
    if(p1.first != p2.first)
    {
        return p1.second > p2.second;
    }
    return p1.first > p2.first;
}
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>m;
        ll max=0;
        for (ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x>max)
            {
                max=x;
            }
            m[x]++;
        }
        ll puchi=0;
        for (auto x:m)
        {
            ll lavda=x.first+(x.second)-1;
            if(lavda>puchi)
            {
                puchi=lavda;
            }
        }
        if(max>puchi)
        {
            cout<<max<<endl;
        }
        else
        {
            cout<<puchi<<endl;
        }
    }
    return 0;
}