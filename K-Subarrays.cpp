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
        int n, k;
        cin >> n >> k;
        int arr[n];
        int x = 0;
        vector<int> gc;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i != 0)
            {
                x = __gcd(x, arr[i]);
                gc.push_back(x);
            }
            else
            {
                x = arr[i];
            }
        }
        int flag = 1;
        int y;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                k--;
                flag = 1;
            }
            else
            {
                if (flag == 1)
                {
                    y = arr[i];
                    flag = 0;
                }
                else
                {
                    y = __gcd(y, arr[i]);
                    if (y == x)
                    {
                        flag = 1;
                        k--;
                    }
                }
            }
        }
        if (k <= 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}