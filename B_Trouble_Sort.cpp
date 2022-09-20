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
        int arr[n];
        int type[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> type[i];
            if (type[i])
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if (zero > 0 and one > 0)
        {
            cout << "Yes\n";
        }
        else
        {
            int flag = 1;
            for(int i=1;i<n;i++)
            {
                if(arr[i]<arr[i-1])
                {
                    flag=0;
                }
            }
            if (flag)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}