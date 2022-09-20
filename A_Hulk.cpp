#include<bits/stdc++.h>
using namespace std;
int main (){
    int x;
    cin>>x;
    string result;
    for (int i=1;i<=x;i++)
    {
        if( x%2==1)
        {
            if(i==1)
            {
                result="I hate it ";
            }
            else if(i%2==0)
            {
                result="I love that "+result;
            }
            else
            {
                result=+"I hate that "+result;
            }
        }
        else if( x%2!=1)
        {
           if(i==1)
           {
                result="I love it ";
           }
           else 
           {
               if(i%2==0)
               {
                   result="I hate that "+result;
               }
               else
               {
                   result="I love that "+result;
               }
           }
        }
        else
        {
            
        }
    }
    cout<<result<<endl;
    return 0;
}