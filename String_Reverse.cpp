#include<bits/stdc++.h>
using namespace std;
string reverse(string s)
{
     int n = s.length();
    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - i - 1]);
    return s;
}
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        string temp=reverse(s);
        int count=0;
        int a=0;
        int b=0;
      
        for (int i=0;i<s.length();i++)
        {
            if(s[a]!=temp[b])
            {
                a++;
                count++;
            }
            else
            {
                b++;
                a++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}