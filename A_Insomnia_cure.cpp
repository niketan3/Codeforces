#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    int d;
    cin>>d;
    int count=0;
    for (int i=1;i<=d;i++)
    {
        if(i%k==0 or i%l==0 or i%m==0 or i%n==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}