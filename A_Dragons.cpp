#include<bits/stdc++.h>
using namespace std;
struct temp
{
    int drag;
    int extra;
};
temp* Sort(temp arr1[] ,int n)
{
    int i=0;
    int j=n-1;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if(arr1[j].drag>arr1[j+1].drag)
            {
                temp x=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=x;
            }
        }
    }
    return arr1;
}
int main (){
    int s,n;
    cin>>s>>n;
    temp arr[n];
   
    for (int i=0;i<n;i++)
    {
        cin>>arr[i].drag;
        cin>>arr[i].extra;
    }
    temp *arr1=Sort(arr, n);
    // for (int i=0;i<n;i++)
    // {
    //     cout<<arr1->drag<<" ";
    // }
    int flag=1;
    for (int i=0;i<n;i++)
    {
        if(s>arr1[i].drag)
        {
            s=s+arr1[i].extra;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}