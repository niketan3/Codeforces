#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int l,b,h;
    cin>>l>>b>>h;
    int x,y,z;
    for(int i=1;i<=l;i++)
    {
        if(l%i==0 and b%i==0)
        {
            x=l/i;
            y=i;
            z=b/i;
            if((x*z)==h)
            {
                break;
            }
        }
    }
    cout<<4*(x+y+z)<<endl;
    return 0;
}