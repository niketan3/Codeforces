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
        ll arr[n];
        ll cpyarr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            cpyarr[i]=arr[i];
        }
        sort(arr,arr+n,greater<int>());
        sort(cpyarr,cpyarr+n);
        ll ma1=arr[0];
        ll ma2=arr[1];
        ll mi1=cpyarr[0];
        ll mi2=cpyarr[1];
        cout<<ma1-mi1+ma2-mi2<<"\n";
    
    }
    return 0;
}