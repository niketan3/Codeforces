#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
class bula
{
    public:
    int no;
    int flag;
    bula()
    {
        no=0;
        flag=0;
    }
};
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string b;
        cin>>b;
        bula arr[26];
        for (int i=0;i<s.length();i++)
        {
            int temp=s[i]-'a';
            arr[temp].no++;

        }
        int count=0;
        for (int i=0;i<s.length();i++)
        {
            int x=b[i]-'a';
            if(arr[x].flag==0 and s[i]!=b[i])
            {
                count++;
               arr[x]. flag=1;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}