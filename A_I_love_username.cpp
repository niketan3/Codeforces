#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int min=0;
    int max=0;
    int count=0;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            max=x;
            min=x;
            continue;
        }
        if(x>max)
        {
            max=x;
            count++;
        }
        else if(x<min)
        {
            min=x;
            count++;
        }
   
    }
     cout<<count<<endl;
    return 0;
}