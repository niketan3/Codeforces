#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int t;
    cin >> t;
    int arr[t + 2];
    arr[0] = 0;
    arr[t + 1] = 0;
    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int next[t + 2];
    next[0] = 0;
    next[t + 1] = 0;
    int flag = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            if(arr[j-1]==arr[j+1])
            {
                next[j]=0;
            }
            else
            {
                next[j]=1;
            }

        }
        for(int j=0;j<t+2;j++)
        {
            arr[j]=next[j];
        }
    }
    for(int i=1;i<=t;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}