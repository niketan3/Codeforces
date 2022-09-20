#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
bool sortbyval(pair<char,ll>p, pair<char,ll>p1)
{
    return(p.second>p1.second);
}
int main (){
ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll>m;
    for(ll i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
   vector<pair<char,ll>>v;
    for(auto x:m)
    {
        v.push_back(x);
    }
    sort(v.begin(),v.end(),sortbyval);
    ll count=0;
ll rem=k;
    for(auto x:v)
    {
        // cout<<x.first<<" "<<x.second<<endl;
        if(x.second<=rem)
        {
            count=count+(x.second*x.second);
            rem=rem-x.second;
        }
        else
        {
            count=count+(rem*rem);
            rem=0;
        }
    }
    cout<<count<<endl;
    return 0;
}