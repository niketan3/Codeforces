#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[3]={0};
    for (int i=0;i<n;i++)
    {
          int x,y,z;
            cin>>x>>y>>z;
            arr[0]=arr[0]+x;
            arr[1]=arr[1]+y;
            arr[2]=arr[2]+z;
    
    }
   
    if(arr[0]==0 and arr[1]==0 and arr[2]==0 )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}