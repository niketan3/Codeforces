#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int e;
    cin>>e;
    while(e--)
    {
        ll n;
        cin>>n;
        float temp=n;
        ll f=ceil((temp+3)/3);
        ll y=n-f;
        ll s=f-1;
        ll t;
        if(s+f==n)
        {
            s=s-1;
            t=1;
        }
        else
        {
            t=n-f-s;
        }
        cout<<s<<" "<<f<<" "<<t<<endl;
    }
    return 0;
}