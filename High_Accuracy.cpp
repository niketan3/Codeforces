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
       if(n%3==0)
       {
        cout<<0<<endl;
       }
       else

       {
         cout<<(3-n%3)<<endl;
       }
    }
    return 0;
}