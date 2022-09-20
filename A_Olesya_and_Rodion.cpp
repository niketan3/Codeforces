#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    int x=n;
    string s;
    s='9';
    int i=1;
    while(i!=n)
    {
        s=s+'9';
        i++;
    }
   if(s.size()<to_string(t).size())
   {
      cout<<-1<<endl;
   }
    else if(n==0)
    {
        cout<<0<<endl;
    }
    

    else if (t == 2)
    {
        string s;
        int i = 0;
        while (i != n - 1)
        {

            s = s + '1';
            i++;
        }
        s = s + '2';
        cout << s << endl;
    }
    else if (t == 3)
    {
        string s;
        s='3';
       int i=1;
        while(i!=n)
        {

            s=s+'0';
            i++;
        }
        cout<<s<<endl;
    }
    else if (t == 4)
    {
        string s;
        s='4';
       int i=1;
        while(i!=n)
        {

            s=s+'0';
            i++;
        }
        cout<<s<<endl;
    }
    else if (t == 5)
    {
        string s;
        int i = 0;
        while (i != n - 1)
        {

            s = s + '1';
            i++;
        }
        s = s + '5';
        cout << s << endl;
    }
    else if (t == 6)
    {
        string s;
        s='6';
       int i=1;
        while(i!=n)
        {

            s=s+'0';
            i++;
        }
        cout<<s<<endl;
    
    }
    else if (t == 7)
    {
        string s;
        s='7';
       int i=1;
        while(i!=n)
        {

            s=s+'0';
            i++;
        }
        cout<<s<<endl;
    
    }
    else if (t == 8)
    {
        string s;
        s='8';
       int i=1;
        while(i!=n)
        {

            s=s+'0';
            i++;
        }
        cout<<s<<endl;
    
    }
    else if (t == 9)
    {
        string s;
        s='9';
       int i=1;
        while(i!=n)
        {

            s=s+'0';
            i++;
        }
        cout<<s<<endl;
    
    }
    else if (t == 10)
    {
          string s;
       int i=0;
        while(i!=n-1)
        {

            s=s+'1';
            i++;
        }
        s=s+'0';
        cout<<s<<endl;
    }
    return 0;
}