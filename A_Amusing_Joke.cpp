#include<bits/stdc++.h>
using namespace std;
int main (){
    string name1,name2,total;
    cin>>name1>>name2>>total;
    if (name1.length()+name2.length()!=total.length())
    {
        cout<<"NO"<<endl;
    }

    else
    {
        int arr[26]={0};
        for (int i=0;i<name1.length();i++)
        {
            arr[name1[i]-65]=arr[name1[i]-65]+1;
        }
        for (int i=0;i<name2.length();i++)
        {
            arr[name2[i]-65]=arr[name2[i]-65]+1;
        }
        int arr2[26]={0};
        for (int i=0;i<total.length();i++)
        {
            arr2[total[i]-65]=arr2[total[i]-65]+1;
        }
        int a=1;
        for (int i=0;i<26;i++)
        {
            if(arr[i]==arr2[i])
            {
                continue;
            }
            else
            {
                a=0;break;
            }
        }
        if(a==0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
    return 0;
}