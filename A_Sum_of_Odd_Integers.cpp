#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int sum;
        cin>>sum;
        int k;
        cin>>k;
        ll ans =k/2*(2+(k-1)*2);
       
        if (sum%2==0 and k%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else if (k==1 and sum%2 ==0)
        {
            cout<<"NO"<<endl;
        }
        else if (sum%2==1 and k%2==0)
        {
            cout<<"NO"<<endl;
        }
         else if (sum <ans)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}