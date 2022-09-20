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
        vector<string> v;
        for (int i = 0; i < 9; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        v[0][0] = v[2][0];
        v[1][3] = v[2][3];
        v[2][6] = v[1][6];
        v[3][1] = v[5][1];
        v[4][4] = v[5][4];
        v[5][7] = v[4][7];
        v[6][2] = v[8][2];
        v[7][5] = v[8][5];
        v[8][8] = v[7][8];
        for (auto x : v)
        {
            for (int i = 0; i < 9; i++)
            {
                cout << x[i];
            }
            cout << endl;
        }
    }
    return 0;
}