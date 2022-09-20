#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int one = 0;
    int two = 0;
    int three = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else if (s[i] == '2')
        {
           two++;
        }
        else if(s[i]=='3')
        {
            three++;
        }
    }
    string result="";
    for (int i=0;i<one;i++)
    {
        if(result=="")
        {
            result='1';
        }
        else
        {
            result=result+'+'+'1';
        }
    }
      for (int i=0;i<two;i++)
    {
        if(result=="")
        {
            result='2';
        }
        else
        {
            result=result+'+'+'2';
        }
    }
      for (int i=0;i<three;i++)
    {
        if(result=="")
        {
            result='3';
        }
        else
        {
            result=result+'+'+'3';
        }
    }
    cout<<result<<endl;

    return 0;
}