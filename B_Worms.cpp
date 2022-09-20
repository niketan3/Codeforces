#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    map<int ,pair<int ,int >>m;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0;i<n;i++)
    {
        if(i==0)
        {
            m[i].second=(1,arr[i]);
            sum=arr[i];
        }
        else
        {
            m[i].second=(sum+1,sum+arr[i]);
            sum=sum+arr[i];
        }
    }
    int in;
    cin>>in;
    for (int i=0;i<in;i++)
    {
        
    }

    return 0;
}