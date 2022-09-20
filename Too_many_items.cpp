#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int items;
        cin>>items;
        if(items%10==0)
        {
            cout<<items/10<<endl;
        }
        else
        {
            cout<<items/10+1<<endl;
        }
    }
    return 0;
}