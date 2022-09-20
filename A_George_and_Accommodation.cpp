#include<bits/stdc++.h>
using namespace std;
int main (){
    int rooms;
    cin>>rooms;
    int count=0;
    for(int i=0;i<rooms;i++)
    {
        int a,b;
        cin>>a>>b;
        if(b-a >=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}