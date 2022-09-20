#include<bits/stdc++.h>
using namespace std;
int main (){
    int s,t;
    cin>>s>>t;
    string x;
    cin>>x;
    for (int i=0;i<t;i++)
    {
        for (int j=0;j<s-1;j++)
        {
            if(x[j]=='B' and x[j+1]=='G')
            {
                char temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
                j++;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}