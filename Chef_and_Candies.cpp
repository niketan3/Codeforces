#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(b>=a)
    {
        cout<<0<<endl;
    }
    else
    {
        int diff=a-b;
        if(diff%4==0)
        {
            cout<<diff/4<<endl;
        }
        else
        {
            cout<<(diff/4)+1<<endl;
        }
    }
}
    return 0;
}