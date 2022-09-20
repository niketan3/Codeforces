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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
    //  char/ temp = s[0];
        vector<pair<int,pair<char,int>>>m;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= s[0] and s[i] <= s[s.length() - 1] or (s[i] <= s[0] and s[i] >= s[s.length() - 1]))
            {
                m.push_back({abs(s[i]-s[0]),{s[i],i+1}});
            }
        }
        sort(m.begin(),m.end());
        int ans=0;
        char temp=s[0];
        vector<int>v;
        for(auto x:m)
        {
            ans=x.first;
            v.push_back(x.second.second);
            // v.push_back(x.second);
        }
        cout<<ans<<" "<<v.size()<<endl;
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
       
    }

    return 0;
}