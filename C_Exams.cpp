#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
int par[2005];
int rank1[2005];
int findpar(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x]);
}
void Union(int a, int b)
{
    a = findpar(a);
    b = findpar(b);
    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        par[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    // for(auto x:v)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            ans=v[i].second;
        }
        else
        {
            if(v[i].second<ans)
            {
                ans=v[i].first;
            }
            else
            {
                ans=v[i].second;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}