#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll co=0;
        if(b>a)
        {
            co++;
        }
        if(c>a)
        {
            co++;
        }
        if(d>a)
        {
            co++;
        }
        cout<<co<<endl;
    }
    return 0;
}