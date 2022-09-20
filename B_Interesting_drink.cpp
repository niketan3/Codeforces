#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int days;
    cin>>days;
    for (int i=0;i<days;i++)
    {
        int count=0;
        int x;
        cin>>x;
        for (int j=0;j<n;j++)
        {
            if(arr[j]<=x)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}