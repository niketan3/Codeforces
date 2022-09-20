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
        ll n;
        ll o;
        ll q;
        cin >> n >> o >> q;
        string s;
        cin >> s;
        map<ll, pair<ll, ll>> m;
        m[s.length()] = {1, s.size()};
        ll total = s.size();
        vector<ll> v;
        v.push_back(s.length());
        while (o--)
        {
            ll st, fi;
            cin >> st >> fi;
            st;
            fi;
            total += fi - st + 1;
            v.push_back(total);
            m[total] = {st, fi};
        }
        // for (auto x : m)
        // {
        //     cout << x.first << " " << x.second.first << " " << x.second.second << endl;
        // }
        while (q--)
        {
            ll index;
            cin >> index;
            index;
            while (index >= s.length())
            {
                auto it = lower_bound(v.begin(), v.end(), index);
                ll start = m[*it].first;
                auto it1 = it;
                it--;
                ll diff = (index - *it);
                index = start + diff - 1;
                // cout << index << endl;
            }
            cout << s[index-1] << endl;
        }
    }
    return 0;
}