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
        int arr1[3];
        cin>>arr1[0]>>arr1[1]>>arr1[2];
        int arr[3]={0};
        arr[n-1]=1;
        int x=arr1[n-1];
        arr[x-1]=1;
        int y=arr1[x-1];
        arr[y-1]=1;
        int flag=0;
        for(int i=0;i<3;i++)
        {
            if(arr[i]==0)
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}