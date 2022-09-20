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
    int n, m;
    cin >> n >> m;
    vector<int> graph[(n * m) + 1];
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '>')
        {
            for (int j = 1; j < m; j++)
            {
                graph[(m * i) + j].push_back((m * i) + j + 1);
            }
        }
        else
        {
            for (int j = m; j > 1; j--)
            {
                graph[(i * m) + j].push_back((i * m) + j - 1);
            }
        }
    }
    int var = 1;
    for (int i = 0; i < s2.length(); i++)
    {

        if (s2[i] == 'v')
        {

            for (int j = 1; j < n; j++)
            {
                cout << 1 + var << endl;
                graph[i+1+ var].push_back((i+1 + var + var));
                var = var + m;
            }
            var=0;
        }
    }

    for (int i = 1; i <= n * m; i++)
    {
        cout << i << " : ";
        for (auto x : graph[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}