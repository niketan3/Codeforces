#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[11]={0};
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[x]++;
        }
        int max=0;
        int j=0;
    
        for (int i=0;i<11;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                j=i;
            }
        }
        int flag=0;
        for (int i=0;i<11;i++)
        {
            if(max==arr[i])
            {
                flag++;
            }
        }
        if(flag>1)
        {
            cout<<"CONFUSED"<<endl;
        }
        else
        {
            cout<<j<<endl;
        }
    }
    return 0;
}