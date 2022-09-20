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
        int ans=0;
        int hash[n+1]={0};
        memset(hash,0,sizeof(hash));
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            arr[i]=x;
        }
        int i=n;
        for(i;i>=1;i--)
        {
            if(hash[arr[i]]==0)
            {
                hash[arr[i]]=1;
            }
            else
            {
                break;
            }
            
        }
        cout<<i<<"\n";
       
    }
    return 0;
}