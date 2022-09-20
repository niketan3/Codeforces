#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int arr[t];
    int arr1[t];
    int count=0;
    for (int i=0;i<t;i++)
    {
        cin>>arr[i];
        cin>>arr1[i];
    }
    for (int i=0;i<t;i++)
    {
        for (int j=0;j<t;j++)
        {
            if(j!=i)
            {
                if(arr[i]==arr1[j])
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}