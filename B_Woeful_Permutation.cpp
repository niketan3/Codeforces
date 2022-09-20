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
        cin>>n;
        vector<int>v;
        if(n%2==1)
        {
            v.push_back(1);
            for(int i=2;i<=n;i++)
            {
                if(i%2==0)
                {
                    v.push_back(i+1);
                }
                else
                {
                    v.push_back(i-1);
                }
            }

        }
        else
        {
             for(int i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    v.push_back(i-1);
                }
                else
                {
                    v.push_back(i+1);
                }
            }
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}