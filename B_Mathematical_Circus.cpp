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
        ll n, k;
        cin >> n >> k;
        if (k % 4 == 0)
        {
            cout << "NO\n";
        }
        else if (k % 2 == 1)
        {
            cout << "YES\n";
            ll i = 1;
            while (i <= n)
            {
                cout << i << " ";
                i++;
                cout << i << " ";
                cout << endl;
                i++;
            }
            // cout<<endl;
        }
        else
        {
            cout << "YES\n";
            vector<ll> v;
            ll i = 1;
            int flag = 0;
            while (i <= n)
            {
                if (flag == 0)
                {
                    cout << i + 1 << " " << i << endl;
                    flag = 1;
                }
                else
                {
                    cout << i << " " << i + 1 << endl;
                    flag = 0;
                }
                i = i + 2;
            }
        }
    }
    return 0;
}