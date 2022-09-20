#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=log2(n);
        ll y=pow(2,x);
       cout<<n-x-1<<endl;
        
      
    }
    return 0;
}