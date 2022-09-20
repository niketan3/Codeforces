#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for (int i=1;i<n;i++)
    {
         if(i==n-1)
         {
             if(s[i]==s[i-1])
             {
                 count++;
             }
         } 
        else if(s[i]==s[i-1] and s[i]==s[i+1])
        {
            count++;
        }
       else if(s[i]==s[i-1] or s[i]==s[i+1])
        {
            count++;
            i++;
        }
    }
    cout<<count;
    return 0;
}