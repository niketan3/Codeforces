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
        int arr[2][n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[0][i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[1][i];
        }
        bool flag[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                flag[i][j] = 0;
            }
        }
        int arr1[n];
        int arr2[n];
        arr1[n - 1] = arr[0][n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            arr1[i] = arr1[i + 1] + arr[0][i];
        }
        arr2[0] = arr[1][0];
        for (int i = 1; i < n; i++)
        {
            arr2[i] = arr[1][i] + arr2[i - 1];
        }
        
        flag[0][0] = 1;
        flag[1][n - 1] = 1;
        arr[0][0] = 0;
        arr[1][n - 1] = 0;
        int k = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr1[i + 1] > arr2[i] and k == 1)
            {
                flag[0][i + 1] = 1;
                arr[0][i + 1] = 0;
            }
            else
            {
                // cout << i << endl;
                flag[1][i] = 1;
                arr[1][i] = 0;
                k = 0;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(flag[0][i]==0)
            {
                ans=ans+arr[0][i];
            }
        }
        int ans1=0;
        for(int i=0;i<n;i++)
        {
            if(flag[1][i]==0)
            {
                ans1=ans1+arr[1][i];
            }
        }
        cout<<max(ans1,ans)<<endl;
    }

    return 0;
}