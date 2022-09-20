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
        vector<pair<int, pair<int, int>>> v;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                v.push_back({__gcd(arr[i], arr[j]), {i, j}});
            }
        }
        sort(v.begin(), v.end());
        int index = 0;
        int visited[n];
        memset(visited, 0, sizeof(visited));
        vector<int> ans;
        for (int i = 0; i < v.size(); i++)
        {
            int x, y;
            x = v[i].second.first;
            y = v[i].second.second;
            if (visited[x] == 1 and visited[y] == 0)
            {
                if(ans[index]==arr[x])
                {
                    visited[y]=1;
                    index++;
                    ans.push_back(arr[y]);
                }
            }
            else if(visited[y]==1 and visited[x]==0)
            {
                if(ans[index]==arr[y])
                {
                    visited[x]=1;
                    ans.push_back(arr[x]);
                    index++;
                }
            }
            else if(visited[y]==1 and visited[x]==1)
            {
                continue;
            }
            else
            {
                if()
            }
        }
    }
    return 0;
}