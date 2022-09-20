#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int odd[n];
        int even[n];
        int arr[n];
        int j=0;
        int k=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]%2==0)
            {
                even[j]=arr[i];
                j++;
            }
            else
            {
                odd[k]=arr[i];
                k++;
            }
        }
        // cout<<j<<endl<<k<<endl;
        if(j==0 and k%2==1)
        {
            cout<<-1<<endl;
        }
        else if(k==0 or k==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(k%2==0)
            {
                for (int i=0;i<k;i++)
                {
                    cout<<odd[i]<<" ";
                }
                for (int i=0;i<j;i++)
                {
                    cout<<even[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                for (int i=0;i<k-1;i++)
                {
                    cout<<odd[i]<<" ";
                }
                for (int i=0;i<j;i++)
                {
                    cout<<even[i]<<" ";
                }
                cout<<odd[k-1];
                cout<<endl;
            }

        }
    }
    return 0;
}