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
        string s1,s2;
        cin>>s1>>s2;
        map<char,int>m;
        m[s1[0]]++;
        m[s1[1]]++;
        m[s2[0]]++;
        m[s2[1]]++;
        if(m.size()==1)
        {
            cout<<0<<endl;
        }
        else if(m.size()==2)
        {
            cout<<1<<endl;
        }
        else if(m.size()==3)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }

    }
    return 0;
}