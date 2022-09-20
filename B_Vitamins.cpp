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
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string t;
        cin >> t;
        sort(t.begin(), t.end());
        if (m[t] != 0)
        {
            m[t] = min(m[t], x);
        }
        else
        {
            m[t] = max(m[t], x);
        }
    }
    // for (auto x : m)
    // {
    //     cout << x.first << x.second << endl;
    // }
    int ans = -1;
    if (m["A"] and m["B"] and m["C"])
    {
        ans = m["A"] + m["B"] + m["C"];
        if (ans == -1)
        {
            ans = m["A"] + m["B"] + m["C"];
        }
    }
    if (m["ABC"])
    {
        ans = min(ans, m["ABC"]);
        if (ans == -1)
        {
            ans = m["ABC"];
        }
    }
    if (m["A"] and m["BC"])
    {
        ans = min(ans, (m["A"] + m["BC"]));
        if (ans == -1)
        {
            ans = m["A"] + m["BC"];
        }
    }
    if (m["B"] and m["AC"])
    {
        ans = min(ans, (m["B"] + m["AC"]));
        if (ans == -1)
        {
            ans = m["B"] + m["AC"];
        }
    }
    if (m["C"] and m["AB"])
    {
        ans = min(ans, (m["C"] + m["AB"]));
        if (ans == -1)
        {
            ans = m["C"] + m["AB"];
        }
    }
    if (m["AB"] and m["BC"])
    {
        if(ans==-1)
        {
            ans=m["AB"]+m["BC"];
        }
        else
        {
            ans=min(m["AB"]+m["BC"],ans);
        }
    }
    if(m["AC"] and m["BC"])
    {
         if(ans==-1)
        {
            ans=m["AC"]+m["BC"];
        }
        else
        {
            ans=min(m["AC"]+m["BC"],ans);
        }
    }
    if(m["AB"] and m["AC"])
    {
         if(ans==-1)
        {
            ans=m["AB"]+m["AC"];
        }
        else
        {
            ans=min(m["AC"]+m["AB"],ans);
        }
    }

    cout << ans << endl;
    return 0;
}