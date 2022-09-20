#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;

    while(t--)
    {
        long long a ,b;
        cin>>a>>b;
        int diff=a-b;
        if(diff==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(diff<0)
            {
                diff=-diff;
            }
            if(diff%10==0)
            {
                cout<<diff/10<<endl;
            }
            else
            {
                cout<<(diff/10)+1<<endl;
            }
        }
    }
    return 0;
}