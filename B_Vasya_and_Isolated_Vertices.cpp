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
    
    
        ll v, e;
        cin >> v >> e;
        ll temp=2*e;
        if(temp>=v)
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<v-temp<<" ";
        }
        ll val;
        for(ll i=0;i<=v;i++)
        {
            if(i*(i-1)>=temp)
            {
                val=i;
                break;
            }
        }
        cout<<v-val<<endl;

    return 0;
}