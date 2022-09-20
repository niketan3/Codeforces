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
void print(vector<string> &v)
{
    for (auto x : v)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<string> v;
        for (int i = 0; i < 8; i++)
        {
            string s = "00000000";
            v.push_back(s);
        }
        x--;
        y--;
        v[x][y] = '1';
        if (y == 0 and x == 0)
        {
            v[2][1] = '2';
            print(v);
        }
        else if (y == 7 and x == 0)
        {

            v[2][6] = '2';
            print(v);
        }
        else if (y == 0 and x == 7)
        {

            v[5][1] = '2';
            print(v);
        }
        else if (x == 7 and y == 7)
        {
            v[5][6] = '2';
            print(v);
        }
        else if (x == 1 and y == 1)
        {

            v[0][4] = '2';
            v[3][0] = '2';
            // v[2][3] = '2';
            print(v);
        }
        else if (x == 6 and y == 6)
        {
            v[4][7]='2';
            v[7][3] = '2';
            print(v);
        }
        else if (x == 6 and y == 1)
        {
            v[3][0]='2';
            v[7][3] = '2';
            print(v);
        }
        else if (x==1 and y==6)
        {

            v[0][4] = '2';
            v[4][7]='2';
            print(v);
        }
        else if (x + 2 <= 7 and x - 2 >= 0 and y - 1 >= 0 and y + 1 <= 7)
        {
            v[x + 2][y - 1] = '2';
            v[x - 2][y + 1] = '2';
            print(v);
        }
        else if (y + 2 <= 7 and x - 1 >= 0 and x + 1 <= 7)
        {

            v[x - 1][y + 2] = '2';
            v[x + 1][y + 2] = '2';
            print(v);
            // continue;
        }
        else if (x - 2 >= 0 and y - 1 >= 0 and y + 1 <= 7)
        {
            v[x - 2][y - 1] = '2';
            v[x - 2][y + 1] = '2';
            print(v);
        }
        else if (y - 2 >= 0 and x + 1 <= 7 and x - 1 >= 0)
        {
            v[x + 1][y - 2] = '2';
            v[x - 1][y - 2] = '2';
            print(v);
        }
        else if (x + 2 <= 7 and y - 1 >= 0 and y + 1 <= 7)
        {
            v[x + 2][y - 1] = '2';
            v[x + 2][y + 1] = '2';
            print(v);
        }
    }
    return 0;
}