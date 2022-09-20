#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int a,b;
        if(x%10==0)
        {
            a=x/10-1;
        }
        else
        {
            a=x/10;
        }
        if(y%10==0)
        {
            b=y/10-1;
        }
        else
        {
            b=y/10;
        }
        cout<<abs(a-b)<<endl;
    }
    return 0;
}