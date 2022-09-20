#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    
    for (int i=1;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for (int i=1;i<n;i++)
        {
             cin>>arr[i];
        }
        for (int i=1;i<=n;i++)
        {
            if(i%4==0)
            {
                continue;
            }
            else
            {
                if(i%2==0 )
                {
                    if(i==n-1)
                    {
                        arr[i]=arr[i-1]*2;
                    }
                    else
                    {
                        arr[i]=arr[i+1]*2;
                    }
                }
                else
                {
                    if(i!=1)
                    {
                        arr[i]=arr[i-1]*2;
                    }
                    
                }
            }
        }
        for (int i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

       
    }
    return 0;
}