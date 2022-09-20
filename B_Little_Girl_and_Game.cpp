#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    string s;
    cin>>s;
    map<char,int> m;

    for (int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    int x=0;
    int y=0;
    for (auto it:m)
    {
        if(it.second%2!=0)
        {
            y++;
        }
    }
    if(y==1 and s.length()%2==1)
    {
        cout<<"First"<<endl;
    }
    else
    {
        y=y-1;
        if(y%2==1)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
    }
    return 0;
}