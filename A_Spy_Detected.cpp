#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[101]={0};
        int ans[n];
        for (int i=1;i<=n;i++)
        {
            int x;
            cin>>ans[i];
            arr[ans[i]]++;
        }
        int temp;
        for (int i=1;i<101;i++)
        {
            if(arr[i]==1)
            {
                temp=i;
            }
        }
       // cout<<temp<<endl;
        for (int i=1;i<=n;i++)
        {
            if(ans[i]==temp)
            {
                cout<<i<<endl;
            }
        }
        
    }
    return 0;
}