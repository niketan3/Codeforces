#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%4==0)
        {
            cout<<n+3<<endl;
        }
       else if(n%4==1)
       {
           cout<<n<<endl;
       }
       else
       {
           cout<<3<<endl;
       }
    }
    return 0;
}