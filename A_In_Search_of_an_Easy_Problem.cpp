#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int key=0;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            key=1;
            cout<<"HARD"<<endl;
            break;
        }
    }
    if(key==0)
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}