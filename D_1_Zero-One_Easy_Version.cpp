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
        int n, x, y;
        cin >> n >> x >> y;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << 0 << endl;
            continue;
        }
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            if (s2[i] == '1' and s1[i] == '0')
            {
                temp.push_back(i);
            }
            if (s1[i] == '1' and s2[i] == '0')
            {
                temp.push_back(i);
            }
        }
        if (temp.size() % 2)
        {
            cout << -1 << endl;
            continue;
        }
        sort(temp.begin(),temp.end());
        if (temp.size() == 2)
        {
            if (temp[0] == (temp[1] - 1))
            {
                ll ans = min(x, 2 * y);
                cout << ans << endl;
                continue;
            }
        }
        ll temp1 = temp.size() / 2;
        cout << temp1 * y << endl;
    }
}