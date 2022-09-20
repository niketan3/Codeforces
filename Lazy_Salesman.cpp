#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int days;
        int total;
        cin>>days>>total;
        int arr[days];
        for (int j=0;j<days;j++)
        {
            cin>>arr[j];
        }
    
    int n=sizeof(arr)/sizeof(arr[0]);
       sort(arr,arr+n);
       int j;
       int temp=0;
        for ( j=days-1;j>=0;j--)
        {
           if(temp<total)
           {
               temp=temp+arr[j];
               
           }
           else
           {
               break;
           }
        }
        cout<<j+1<<endl;
    }
    return 0;
}