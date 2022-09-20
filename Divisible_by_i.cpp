#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        arr[n]=1;
        arr[n-1]=n;
        int flag[n+1]={0};
        flag[n]=1;
        flag[1]=1;
        for (int i=n-2;i>=1;i--)
        {
           int y=(arr[i+1]-i);
           if(y>0 and flag[y]==0)
           {
            arr[i]=y;
            flag[y]=1;
           }
           else
           {
             int z=i+arr[i+1];
             arr[i]=z;
             flag[z]=1;
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