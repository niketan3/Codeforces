#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int odd=0;
        int even=0;
        while(n>0)
        {
            int x=n%10;
            n=n/10;
            
            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int flag=0;
        if(odd>=2)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
        else if(even >=2)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
        else  if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}