#include<bits/stdc++.h>
using namespace std;
struct repeat
{
    int x=0;
    int y=0;

};
int main (){
    int n;
    cin>>n;
    repeat arr[n]={0};
    string arrs[n];
    cin>>arrs[0];
    cout<<"OK"<<endl;
    for (int i=1;i<n;i++)
    {
        string x;
        cin>>x;
        for (int j=0;j<i;j++)
        {
            if(x==arrs[j])
            {
               arr[i].x++; 
               arr[i].y=j;
            }
        }
        arrs[i]=x;
        if(arr[i].x==0)
        {
            cout<<"OK"<<endl;
        }
        else 
        {
            cout<<arrs[arr[i].y]+to_string(arr[i].x)<<endl;
        }
    }
      return 0;
}