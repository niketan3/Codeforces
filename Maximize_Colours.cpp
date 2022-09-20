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
        int x,y,z;
        cin>>x>>y>>z;
        int count=0;
        if(x>=1)
        {
            count++;
        }
        if(y>=1)
        {
            count++;
        }
        if(z>=1)
        {
            count++;
        }
        int arr[3]={x,y,z};
        sort(arr,arr+3);
        if(arr[0]>1 and arr[2]>1)
        {
            arr[0]--;
            arr[2]--;
            count++;
        }
        if(arr[1]>1 and arr[2]>1)
        {
            arr[1]--;
            arr[2]--;
            count++;
        }
        if(arr[0]>1 and arr[1]>1)
        {
            arr[0]--;
            arr[1]--;
            count++;
        }
        
        cout<<count<<endl;
    }
    return 0;
}