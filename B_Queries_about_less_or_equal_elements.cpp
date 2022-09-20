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
   
    
        int n,m;
        cin>>n>>m;
        ll arr[n];
        ll arr1[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr1[i];
        }
        sort(arr,arr+n);
        vector<int>ans;
        for(int i=0;i<m;i++)
        {
            auto it=upper_bound(arr,arr+n,arr1[i]);
            int x=it-arr;
           
            // else
            {
                ans.push_back(x);
            }
        }
        for(auto x:ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    
    return 0;
}