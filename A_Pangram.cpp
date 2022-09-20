#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[26]={0};
    int n;
    cin>>n;
    if(n<26)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        string s;
        cin>>s;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]>='a')
            {
                arr[s[i]-97]=1;

            }  
            else
            {
                arr[s[i]-65]=1;

            } 
        }
       
        int a=1;
        for (int i=0;i<26;i++)
        {
            if(arr[i]==0)
            {
                a=0;
                break;

            }
        }
        if(a==1)
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