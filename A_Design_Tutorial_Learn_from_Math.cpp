#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main (){
    int n;
    cin>>n;
    for (int i=4;i<n;i++)
    {
        if(!isPrime(i))
        {
            if(!isPrime(n-i))
            {
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
    return 0;
}