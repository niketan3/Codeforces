#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        int temp=n/3;
        int ans=n-temp;
        cout<<ans*x<<endl;
    }
    return 0;
}