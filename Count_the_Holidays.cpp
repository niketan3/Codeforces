#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int holidays=8;
        int x;
        cin>>x;
        for (int i=0;i<x;i++)
        {
            int y;
            cin>>y;
            if(y==6 or y==7 or y==13 or y==14 or y==20 or y==21 or y==27 or y==28)
            {
                continue;
            }
            else
            {
                holidays++;
            }
        }
        cout<<holidays<<endl;
        
    }
    return 0;
}   