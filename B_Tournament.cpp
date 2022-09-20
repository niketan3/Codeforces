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
    int graph[n + 1] = {0};
    int temp = n * (n - 1) / 2;
    int win[n+1]={0};
    for (int i = 0; i < temp - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x]++;
        graph[y]++;
        win[x]++;
    }
    int ans1 = 0;
    int ans2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (graph[i] != n - 1)
        {
            if (ans1 == 0)
            {
                ans1 = i;
            }
            else
            {
                ans2 = i;
            }
        }
    }
    if(win[ans1]>=win[ans2])
    {
        cout<<ans1<<" "<<ans2<<endl;
    }
    else
    {
        cout<<ans2<<" "<<ans1<<endl;
    }
    return 0;
}