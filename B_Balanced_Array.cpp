#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int sum=0;
            for (int i=1;i<=n/2;i++)
            {
                cout<<i*2<<" ";
                sum=sum+(i*2);
            }
            int sum2=0;
            for (int i=0;(i<n/2-1);i++)
            {
                cout<<i*2+1<<" ";
                sum2=sum2+(i*2+1);
            }
            cout<<sum-sum2<<endl;
        }
    }
    return 0;
}