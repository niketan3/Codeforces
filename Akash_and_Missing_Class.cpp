#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp=n;
        temp=temp/7;
        n=n%7;
        int ans=temp;
        if(n==6)
        {
            ans=ans+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}