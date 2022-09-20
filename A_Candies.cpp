#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp=1;
        for(int i=1;i<=n;i++)
        {
            temp=temp+pow(2,i);
            if(n%temp==0)
            {
                cout<<n/temp<<endl;
                break;
            }
        }
    }
    return 0;
}