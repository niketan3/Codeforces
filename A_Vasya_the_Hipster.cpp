#include<bits/stdc++.h>
using namespace std;
int main (){
    int red,blue;
    cin>>red>>blue;
    if(red>blue)
    {
        cout<<blue<<" ";
        if(red-blue>=2)
        {
            cout<<(red-blue)/2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    else
    {
        cout<<red<<" ";
        if(blue-red>=2)
        {
            cout<<(blue-red)/2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}