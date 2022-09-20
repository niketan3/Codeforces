#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll n;
    cin>>n;
    int x;
    x=n%4;
    if (n==0)
    {
        cout<<1<<endl;
    }
   else if (x==0)
    {
        cout<<6<<endl;
    }
    else if(x==1)
    {
        cout<<8<<endl;
    }
    else if(x==2)
    {
        cout<<4<<endl;
    }
    else if(x==3)
    {
        cout<<2<<endl;
    }
    return 0;
}