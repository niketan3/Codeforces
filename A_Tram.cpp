#include<bits/stdc++.h>
using namespace std;
struct temp
{
    int first;
    int second;
};
int main (){
    int stops;
    cin>>stops;
    temp arr[stops];
    for (int i=0;i<stops;i++)
    {
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    int arr1[stops];
    for (int i=0;i<stops;i++)
    {
        if(i==0)
        {
            arr1[i]=arr[i].second-arr[i].first; 
        }
        else
        {
            arr1[i]=arr1[i-1]+arr[i].second-arr[i].first; 
        }
          
    }
    int min=0;
    for(int i=0;i<stops;i++)
    {
        if(arr1[i]>min)
        {
            min=arr1[i];
        }
    }
    cout<<min<<endl;
    return 0;
}