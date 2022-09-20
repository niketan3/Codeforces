#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >>s;
    int arr[26]={0};
    int count=0;
    for (int i=0;i<s.length();i++)
    {
        int x=s[i];
        if(arr[x-97]==0)
        {
            count++;
            arr[x-97]=1;
        }

    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}