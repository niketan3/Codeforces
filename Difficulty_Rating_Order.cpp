#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=1;
        int Arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>Arr[i];
        }
        for (int i=1;i<n;i++)
        {
            if(Arr[i]<Arr[i-1])
            {
                flag=0;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else

        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}