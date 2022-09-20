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
        int n,x,y;
        cin>>n>>x>>y;
        if(x!=0 and y!=0)
        {
            cout<<-1<<endl;
        }
        else if(x==0 and y==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int ma=max(x,y);
            int temp=0;
            vector<int>v;
            int ans=1;
            for(int i=2;i<=n;i++)
            {
                temp++;
                v.push_back(ans);
                if(temp==ma)
                {
                    temp=0;
                    // cout<<i<<endl;
                    ans=i+1;
                }
            }
            // cout<<temp<<endl;
            // for(auto x:v)
            // {
            //     cout<<x<<" ";
            // }
            // cout<<endl;
            if(temp==0)
            {
                for(auto x:v)
                {
                    cout<<x<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}