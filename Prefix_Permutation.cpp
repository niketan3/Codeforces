#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int lenght;
        cin>>lenght;
        int size;
        cin>>size;
        int arr[lenght];
        for (int j=0;j<size;j++)
        {
           int x;
           cin>>x;
           for (int j=0;j<x;j++)
           {
               arr[j]=x;
               x--;
           }
        }
        for (int j=0;j<lenght;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}