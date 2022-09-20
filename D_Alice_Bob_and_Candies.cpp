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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a = 0;
        int b = 0;
        int moves = 0;
        int flag = 0;
        int i = 0;
        int j = n - 1;
        int temp1 = 0;
        int temp2 = 0;
        while (i <= j)
        {
            if (flag == 0)
            {
                int x = 0;
                for (i; i < j; i++)
                {
                    x += arr[i];
                    temp1 = arr[i];
                    if (x > temp2)
                    {
                        break;
                    }
                }

                a+=x;
                flag=1;
            }
            else
            {
                int x=0;
                for(j;j>i;j--)
                {
                    x+=arr[j];
                    temp2=arr[j];
                    if(x>temp1)
                    {
                        break;
                    }
                }
                b+=x;
                flag=0;
            }
            moves++;
        }
        cout << moves << " " << a << " " << b << endl;
    }
    return 0;
}