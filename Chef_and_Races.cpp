#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if((x!=a and y!=b ) and (x!=b and y!=a))
        {
            cout<<2<<endl;
        }
        else if((x==a and y==b)or(y==a and x==b))
        {
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}