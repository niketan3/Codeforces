#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll s;
    cin>>s;
    ll t;
    cin>>t;
    ll min=s/t;
    if(s%t==0)
    {
        min=t*min*(min-1)/2;
        
        
    }
    else if(s%t!=0)
    {
        ll re=s%t;
        ll t1=min+1;   
        min=(t-re)*min*(min-1)/2;

        t1=re*t1*(t1-1)/2;
        min=min+t1;

    }
    cout<<min<<" ";
    ll temp=s-t+1;
    cout<<temp*(temp-1)/2<<endl;
    return 0;
}