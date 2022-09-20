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

int findpar(int x, vector<int> &par)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x], par);
}
void Union(int a, int b, vector<int> &par, vector<int> &rank1)
{
    a = findpar(a, par);
    b = findpar(b, par);
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
    int n, f, s;
    cin >> n >> f >> s;
    vector<int> par(n + 1);
    vector<int> par2(n + 1);
    for (int i = 1; i <= n; i++)
    {
        par[i] = i;
        par2[i] = i;
    }
    vector<int> rank(n + 1);
    vector<int> rank1(n + 1);
    for (int i = 0; i <= n; i++)
    {
        rank[i] = 0;
        rank1[i] = 0;
    }

    for (int i = 1; i <= f; i++)
    {
        int x, y;
        cin >> x >> y;
        Union(x, y, par, rank);
    }
    for (int i = 1; i <= s; i++)
    {
        int x, y;
        cin >> x >> y;
        Union(x, y, par2, rank1);
    }
    int count = 0;
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int a = findpar(i, par);
            int b = findpar(j, par);
            int c = findpar(i, par2);
            int d = findpar(j, par2);
            if (a == b or c == d)
            {
                continue;
            }
            else
            {
                count++;
                Union(a,b,par,rank);
                Union(c,d,par2,rank1);
                ans.push_back({i,j});
            }
        }
    }
    cout<<count<<endl;
    for(auto x:ans)
    {
        // cout<<"HI"<<endl;
        cout<<x.first<<" "<<x.second<<"\n";
    }
    return 0;
}