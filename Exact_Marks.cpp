#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n*3 <x)
        {
            cout<<"NO"<<endl;
        }
        else if(x%3==0 and x/3<=n)
        {
            cout<<"YES"<<endl;
            cout<<x/3<<" "<<0<<" "<<(n-x/3)<<endl;
        }
        else
        {
            int y=x%3;
            int temp=3-y;
            int a=x+temp;
            int count=x/3+1+(a-x);
            if(count<=n)
            {
                cout<<"YES"<<endl;
                cout<<(x/3+1)<<" "<<a-x<<" "<<(n-(x/3+1)-(a-x))<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}