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
        int neg=0;
        int pos=0;
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==-1)
            {
                neg++;
            }
            else
            {
                pos++;
            }
        }
        if(n%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<abs(pos-neg)/2<<endl;
        }
    }
    return 0;
}