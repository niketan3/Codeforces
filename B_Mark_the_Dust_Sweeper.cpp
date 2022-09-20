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
        ll n;
        cin >> n;
        ll arr[n];
        vector<ll> v;
        int k = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            if (arr[i] == 0 and flag == 1)
            {
                k++;
            }
            else
            {
                flag=0;
            }
            if (arr[i] == 0 and i != n - 1 and flag==0)
            {
                v.push_back(i);
            }
        }
        ll count = 0;
        int j = 0;
        int temp = v.size();
        int  rada=k;
        for(int i=k;i<n-1;i++)
        {
            if(arr[i]==0)
            {
                arr[i]++;
                count++;
                if(arr[k]!=0)
                {
                    arr[k]--;
                }
                else
                {
                    k++;
                    arr[k]--;
                }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            count=count+arr[i];
        }
        cout<<count<<'\n';
    }
    return 0;
}