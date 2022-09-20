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
        int le, n;
        cin >> le >> n;
        string s;
        cin >> s;
        int arr[le] = {0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[x - 1]++;
        }
        
        int suf[le]={0};
        suf[le - 1] = arr[le - 1];
        for (int i = le - 2; i >= 0; i--)
        {
            suf[i] = suf[i + 1] + arr[i];
        }
        int print[26]={0};
         for(int i=0;i<le;i++)
        {
            print[s[i]-'a']++;
        }
        // for(auto x:print)
        // {
        //     cout<<x<<" ";
        // }
        for(int i=0;i<le;i++)
        {
            print[s[i]-'a']+=suf[i];
        }
        for(auto x:print)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}