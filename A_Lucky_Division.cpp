#include<bits/stdc++.h>
using namespace std;

bool Cheack(int x)
{
    if(x%4==0 or x%7==0 or x%44==0 or x%77==0 or x%47==0 or x%74==0 or x%444==0 or x%447==0 or x%474==0 or x%477==0 or x%744==0 or x%747==0 or x%774==0 or x%777==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main (){
    int x;
    cin>>x;
    
    
    
        if(Cheack(x))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    return 0;
}