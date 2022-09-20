#include<bits/stdc++.h>
using namespace std;
int main (){
    int problems;
    cin>>problems;
    int k;
    cin>>k;
    if(k>=240)
    {
        cout<<0<<endl;
    }
    else
    {
        int x=240-k;
        int count=0;
        int i=1;
        while(x>=0)
        {
            int temp=i*5;  
            if(temp<=x)
            {
                count++;
            }
            i++;
            x=x-temp;
          
        }
        if(count<problems)
        {
            cout<<count;
        }
        else
        {
            cout<<problems;
        }
        
    }
    return 0;
}       