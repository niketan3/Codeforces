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
        int n;
        cin >> n;
        ll l, r;
        cin >> l >> r;
        vector<ll> v;
        vector<ll> v1;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end());
        // for (auto x : v1)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        ll count = 0;
        for (int i = 0; i < n-1; i++)
        {
            ll temp1, temp2;
            temp1=l-v1[i];
        temp2=r-v1[i];
            auto it = lower_bound(v1.begin()+i+1, v1.end(), temp1);
            auto it1 = upper_bound(v1.begin()+i+1, v1.end(), temp2);
            count+=it1-it;
            
        }
        cout<<count<<"\n";
    }
    return 0;
}