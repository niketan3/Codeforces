#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    if(s.length()<5)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int count=0;
        int flagh=0;
        int flage=0;
        int flagl=0;
        int flago=0;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='h' and count==0)
            {
                flagh++;
                count++;
            }          
            else if(s[i]=='e' and count ==1)
            {
                flage++;
                count++;
            }
            else if(s[i]=='l' and (count==2 or count==3))
            {
                flagl++;
                count++;
            }
            else if(s[i]=='o' and count==4)
            {
                flago++;
                count++;
            }
        }
        if(flagl>=2 and flagh>=1 and flage>=1 and flago>=1)
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