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
        cout<<n<<endl;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            arr[i]=i;
        }
        int i=n;
        int j=1;
        int temp=n;
        while(temp--)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            swap(arr[i],arr[j]);
            j++;
        }
        // cout<<endl;
    }
    return 0;
}