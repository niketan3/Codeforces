#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<10 or b<10 or c<10)
    {
        cout<<"FAIL"<<endl;
    }
    else
    {
        int sum=a+b+c;
        if(sum<100)
        {
            cout<<"FAIL"<<endl;
        }
        else
        {
            cout<<"PASS"<<endl;
        }
    }
}
    return 0;
}