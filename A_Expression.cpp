#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    if(a==b==c==1)
    {
        cout<<3<<endl;
    }
    else if(a==1 and c==1)
    {
        cout<<a+b+c<<endl;
    }
    else if(a==1)
    {
        sum=a+b;
        cout<<sum*c<<endl;
    }

    else if(b==1)
    {
        if(a<c)
        {
            sum=a+b;
            cout<<sum*c<<endl;
        }
        else
        {
            cout<<(b+c)*a<<endl;
        }
    }
    else if(c==1)
    {
        sum=b+c;
        cout<<a*sum<<endl;
    }
    
    else
    {
        cout<<a*b*c<<endl;
    }
    return 0;
}