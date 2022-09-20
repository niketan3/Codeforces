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
string ans="";
ll one=0;
int dp[100005];
void solve(int n,ll q,ll arr[],string s,ll o,int index)
{
    if(q<0)
    {
        return;
    }
    // cout<<s<<endl;
    if(index==n)
    {
        
        if(o>one)
        {
            one=o;
            ans=s;
        }
        return;
    }
    if(arr[index]<=q)
    {
        solve(n,q,arr,s+'1',o+1,index+1);
    }
    else
    {
        
        solve(n,q-1,arr,s+'1',o+1,index+1);
        solve(n,q,arr,s+'0',o,index+1);
        
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        ll q;
        cin>>n>>q;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solve(n,q,arr,"",0,0);
        cout<<ans<<endl;
        ans="";
        one=0;
    }
    return 0;
}