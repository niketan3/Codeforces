#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n,k,w;
    cin>>n>>k>>w;
    long long x= n*w*(w+1)/2;
    if(k>x)
    {
        cout<<0<<endl;
    }
    else{
     cout<<x-k<<endl;
    }
   
    return 0;
}