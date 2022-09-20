#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int x=0;
    int count=n;
    int i=1;
    while(true)
    {
        if(x<count)
        {
            count++;
            x=x+m;
            i++;
        }
        else
        {
            break;
        }
    }
    cout<<count-1<<endl;
    return 0;
}