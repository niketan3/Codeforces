#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
         int flag=0;
        for (int i=n-2;i>=0;i--)
        {
            if(arr[i]>=arr[i+1])
            {
                ll temp=0;
                if(arr[i+1]!=0)
                {
                     temp=arr[i]/arr[i+1];
                }
                else
                {
                        cout<<-1<<endl;
                        flag=1;
                        break;
                }
                ll temp1=log2(temp);
                count=count+temp1+1;
                arr[i]=arr[i]/pow(2,(temp1+1));
                if(arr[i]==0 and i!=0)
                {
                    flag=1;
                }
                if(flag==1)
                {
                    cout<<-1<<endl;
                    break;
                }
            }
        }
        if(flag!=1)
        {
            cout<<count<<endl;
        }
    }
    return 0;
}