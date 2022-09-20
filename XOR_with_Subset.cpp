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
int ma = 0;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans=0;

        for(int i=1;i<pow(2,n);i++)
        {
            // cout<<i<<" ";
            int j=1;
            int temp=0;
            // while(j<=i)
            // {
                 
  
            //     if((j&i))
            //     {
                    
            //         // cout<<j<<endl;
            //         int r=log2(j);
            //         // cout<<arr[r]<<" ";
            //          temp=(temp^arr[r]);
            //     }
                
            //     j=j<<1;

            // }
            for(int j=0;j<n;j++)
            {
                if((j<<1)&i)
                {
                    temp=(temp^arr[j]);
                }
            }
            temp=temp^k;
            if(temp>ans)
            {
                ans=temp;
            }
        }
       
        cout<<max(ans,k)<<endl;
    }
    return 0;
}