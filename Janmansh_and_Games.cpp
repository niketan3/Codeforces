#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2==0 and y%2==0)
        {
            cout<<"Janmansh"<<endl;
        }
        else if(x%2==0 and y%2==1)
        {
            cout<<"Jay"<<endl;
        }
        else if(x%2==1 and y%2==0)
        {
            cout<<"Jay"<<endl;
        }
        else if(x%2==1 and y%2==1)
        {
            cout<<"Janmansh";
        }
    }
    return 0;
}