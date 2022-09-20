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
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int i = 0;
        int j = n / 2;
        int temp = j;
        int flag = 1;
        vector<int> ans;
        
        while (i < j)
        {
            if(arr[i]>=ans.back())
            {
                flag=0;
            }
            if (arr[i] < arr[j])
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
            i++;
            j++;
        }
        // if(flag)
        // {
        //     cout<<"YES\n";
        // }
        // for(auto x:ans)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}