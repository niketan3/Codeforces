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
    int n, q;
    cin >> n >> q;
    int forbidden = 0;
    int arr[3][n + 1];
    memset(arr, false, sizeof(arr));
    while (q--)
    {
        int r, c;
        cin >> r >> c;
        if (arr[r][c])
        {  
            //  cout<<r<<" "<<c<<endl;
            arr[r][c] = 0;
            if (r == 1)
            {
                if (c - 1 > 0)
                {
                    if (arr[2][c - 1])
                    {
                        forbidden--;
                    }
                }
                if (arr[2][c])
                {
                    forbidden--;
                }
                if (c + 1 <= n)
                {
                    if (arr[2][c + 1])
                    {
                        forbidden--;
                    }
                }
            }
            else
            {
                if (c - 1 > 0)
                {
                    if (arr[1][c - 1])
                    {
                        forbidden--;
                    }
                }
                if (arr[1][c])
                {
                    forbidden--;
                }
                if (c + 1 <= n)
                {
                    if (arr[1][c + 1])
                    {
                        forbidden--;
                    }
                }
            }
        }
        else
        {
            arr[r][c]=1;
            if (r == 1)
            {
                if (c - 1 > 0)
                {
                    if (arr[2][c - 1])
                    {
                        forbidden++;
                    }
                }
                if (arr[2][c])
                {
                    forbidden++;
                }
                if (c + 1 <= n)
                {
                    if (arr[2][c + 1])
                    {
                        forbidden++;
                    }
                }
            }
            else
            {
                if (c - 1 > 0)
                {
                    if (arr[1][c - 1])
                    {
                        forbidden++;
                    }
                }
                if (arr[1][c])
                {
                    forbidden++;
                }
                if (c + 1 <= n)
                {
                    if (arr[1][c + 1])
                    {
                        forbidden++;
                    }
                }
            }
        }
        // cout<<forbidden<<endl;
        if(forbidden>0)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    return 0;
}