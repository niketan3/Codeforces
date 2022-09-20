#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        int arr[g];
        int rs;
        cin>>rs;
        for (int i=0;i<g;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+g);
        int count=0;
        int i;
        for ( i=0;i<g;i++)
        {
            if(arr[i]<=rs)
            {
                count++;
                rs=rs-arr[i];
            }
            else
            {
                break;
            }
        }
        for (int j=i;j<g;j++)
        {
            int x;
            if(arr[j]%2==0)
            {
                x=arr[j]/2;
            }
            else{
                x=arr[j]/2+1;
            }
            if(x<=rs)
            {
                count++;
                rs=rs-x;
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}