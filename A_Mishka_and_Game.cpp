#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    int m=0;
    int a=0;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            m++;
        }
        else if(y>x)
        {
            a++;
        }
    }
    if(m>a)
    {
        cout<<"Mishka";
    }
    else if(a>m)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}