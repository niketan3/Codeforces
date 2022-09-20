#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n>=100)
        {
            count=count+1;
            n=n-100;
        }
        else if(n>=20)
        {
            count=count+1;
            n=n-20;
        }
        else if(n>=10)
        {
            count=count+1;
            n=n-10;
        }
        else if(n>=5)
        {
            count=count+1;
            n=n%5;
        }
        else
        {
            count=count+n;
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}