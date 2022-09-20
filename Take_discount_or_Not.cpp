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
        int x,y;
        cin>>x>>y;
        int sum=0;
        int sum1=0;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            sum=sum+temp;
            sum1=sum1+max(0,temp-y);
        }
        if(sum1+x<sum)
        {
            cout<<"COUPON"<<endl;
        }
        else
        {
            cout<<"NO COUPON"<<endl;
        }
    }
    return 0;
}