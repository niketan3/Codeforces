#include<bits/stdc++.h>
using namespace std;
int main (){
    int W;
    cin>>W;
    int x=0;
    for (int i=2;i<=W/2;i++)
    {
        if(i%2==0)
        {
           if(W%i==0)
           {
               x=1;
               cout<<"YES";
               break;
           }
        }
    }
    if(x==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}