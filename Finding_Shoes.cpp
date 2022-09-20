#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n>>l;
        int temp=2*n;
        int temp1=min(n,l);
        cout<<temp-temp1<<endl;
    }
    return 0;
}