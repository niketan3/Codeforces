#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int temp=y/x;
        if(temp>=z)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<z-temp<<endl;
        }
    }
    return 0;
}