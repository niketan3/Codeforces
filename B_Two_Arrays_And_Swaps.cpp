#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        int b[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        while(k--)
        {
            if(a[k]<b[k])
            {
                swap(a[k],b[k]);
            }
        }
        int sum=0;
        for (int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}