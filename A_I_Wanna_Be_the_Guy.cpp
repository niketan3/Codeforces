#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n]={0};
    int x;
    cin>>x;
    int i;
    for (i=0;i<x;i++)
    {
        int temp;
        cin>>temp;
     
        arr[temp]=temp;
    }
    int j;
    int y;
    cin>>y;
    for (int j=0;j<y;j++)
    {
        int temp;
        cin>>temp;
        arr[temp]=temp;
       
    }
    int key=0;
    for (int k=1;k<=n;k++)
    {
        if(arr[k]!=k)
        {
           
            key=1;
            cout<<"Oh, my keyboard!";
            break;
        }
        
    }
    if(key==0)
    {
        cout<<"I become the guy."<<endl;
    }

    return 0;
}