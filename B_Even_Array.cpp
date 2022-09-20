#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int one ,zero;
        if(n%2==0)
        {
            one =n/2;
            zero=n/2;
        }
        else
        {
            one=n/2;
            zero=n/2+1;
        }
        int z=0;
        int y=0;
        int error=0;
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(i%2!= x%2)
            {
               error++;
            }
            if(x%2==1)
            {
                z++;
            }
            else
            {
                y++;
            }

        }
        if(z!=one)
        {
            cout<<-1<<endl;
        }
        else if(y!=zero)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<error/2<<endl;
        }
    }
    return 0;
}