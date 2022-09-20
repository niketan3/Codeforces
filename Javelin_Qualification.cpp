#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{   if (b == 0) return 1;
ll resp = binaryExp(a, b / 2);
if (b & 1) // b is odd
return a * (resp)*resp;
else
return resp * resp;
}
bool cmp(pair<int,ll>p1,pair<int,ll>p2)
{
    if(p2.second>p1.second)   {
        return false;
    }
    return true;
}
int main (){
    
int t;
cin>>t;
while(t--)
 {
    ll n,ma,k;
    cin>>n>>ma>>k;
   vector<pair<int,ll>>p;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        p.push_back(make_pair(i,x));
    }
    vector<int>v;
    for(auto x:p)
    {
        if(x.second>=ma)
        {
            v.push_back(x.first);
        }
    }
    if(v.size()>=k)
    {
        cout<<v.size()<<" ";
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else
    {
        ll diff=k-v.size();
        sort(p.begin(),p.end(),cmp);
        // for(auto x:p)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        // cout<<diff<<endl;
        int k=0;
        for(int i=0;i<n;i++)
        {
           if(p[i].second>=ma)
           {
            k++;
           }
        }
        for(int i=k;i<k+diff;i++)
        {
            v.push_back(p[i].first);
        }
        // for(auto x:p)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        cout<<v.size()<<" ";
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
 }
    return 0;
}