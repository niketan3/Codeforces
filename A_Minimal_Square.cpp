#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int mi=min(x,y);
        int temp=mi*2;
        int ma=max(temp,(max(x,y)));
        cout<<ma*ma<<endl;
    }
    return 0;
}