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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        ll arr[n];
        ll ma=0;
        int index;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>ma)
            {
                ma=arr[i];
                index=i;
            }
        }
        int flag=1;
        for(int i=1;i<index;i++)
        {
            if(arr[i]<arr[i-1])
            {
                flag=0;
            }
        }
        for(int i=index+1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                flag=0;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}