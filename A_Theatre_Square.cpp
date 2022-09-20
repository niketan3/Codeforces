#include<bits/stdc++.h>
using namespace std;
int main (){
    long long len,bre;
    cin>>len>>bre;
    long long a;
    cin>>a;
    long long cl=0;
    if(len%a==0)
    {
        cl=len/a;
    }
    else 
    {
        cl=(len/a)+1;
    }
    long long cb=0;
   bre=bre-a;
   if(bre >0)
   {
       if(bre%a==0)
       {
           cb=cl*(bre/a);
       }
       else
       {
           cb=cl*(bre/a+1);
       }
   }
    cout<<cb+cl<<endl;
    return 0;
}