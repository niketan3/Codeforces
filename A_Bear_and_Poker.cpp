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
    ll lc;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        // cout<<n<<endl;
        ll x;
        cin >> x;
        arr[i] = x;
        if (i == 0)
        {
            lc = x;
        }
        else
        {
            // cout<<lc<<endl;
            lc = x * lc / (__gcd(x, lc));
        }
    }
    int flag = 1;
    // cout<<lc<<endl;
    for (int i = 0; i < n; i++)
    {
        int rada = 0;
        ll temp = lc / arr[i];
        // cout<<temp<<endl;
        if (lc % arr[i] == 0)
        {
            if (pow(2, log2(temp)) == temp)
            {
                // cout<<temp<<endl;
                rada = 1;
            }
        }
        if (lc % arr[i] == 0)
        {
            if (pow(3, (log(temp) / log(3))) == temp)
            {
                // cout<<temp<<endl;
                rada = 1;
            }
        }
        if (temp % 6 == 0)
        {
            rada = 1;
        }
        if (!rada)
        {
            flag = 0;
        }
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}