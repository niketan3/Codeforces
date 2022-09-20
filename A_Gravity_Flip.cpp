#include<bits/stdc++.h>
using namespace std;
int main (){
    int columns;
    cin>>columns;
    int arr[columns];
    for (int i=0;i<columns;i++)
    {
        cin>>arr[i];
    }
    for (int i=columns-1; i>0;i--)
    {
        for (int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
            {
                int diff=arr[j]-arr[i];
                arr[i]=arr[i]+diff;
                arr[j]=arr[j]-diff;
            }
        }
    }
    for (int i=0;i<columns;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}