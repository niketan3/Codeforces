#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(21-(x+y)>10)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<21-(x+y)<<endl;
        }
    }
    return 0;
}