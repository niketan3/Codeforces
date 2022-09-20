#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        int temp;
        cin>>x>>y>>n;
        temp=n;
        // if(n%x==y)
        // {
        //     cout<<n<<endl;
        // }
        int rem=n%x;
        n=n-rem;
        // cout<<n+y<<endl;
        if(n+y<=temp)
        {
            n=n+y;
            // cout<<n<<endl;
        }
        
        else
        {
            n=n-(x-y);
        }
        cout<<n<<endl;
    }
    return 0;
}