#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int prev[n];
        prev[0]=0;
        // cout<<prev[0]<<" ";
        for(int i=1;i<n;i++)
        {
            prev[i]=prev[i-1]^arr[i-1];
            // cout<<prev[i]<<" ";
        }
        // cout<<endl;
        int back[n];
        back[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            back[i]=back[i+1]^arr[i+1];
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<back[i]<<" ";
        // }
      
        for(int i=0;i<n;i++)
        {
            if((prev[i]^back[i])==arr[i])
            {
                cout<<arr[i]<<endl;
                break;
            }
        }

        
        
    }
    return 0;
}