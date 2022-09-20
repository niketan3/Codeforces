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
        int x,y,sx,sy,d;
        cin>>x>>y>>sx>>sy>>d;
        bool visited[x+1][y+1];
        memset(visited,0,sizeof(visited));
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(abs(sx-i)+abs(sy-j)<=d)
                {
                    visited[i][j]=1;
                }
            }
        }
        if(visited[x-1][y]==1 and visited[x][y-1]==1)
        {
            cout<<-1<<endl;
        }
        else if(visited[2][1]==1 and visited[1][2]==1)
        {
            cout<<-1<<endl;
        }
        else if(visited[x][y]==1)
        {
            cout<<-1<<endl;
        }
        else if(visited[1][1]==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<x+y-2<<endl;
        }
    }
    return 0;
}