#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    int count=0;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if((x+m)<=5)
        {
            count++;
        }

    }
    cout<<count/3<<endl;
    return 0;
}