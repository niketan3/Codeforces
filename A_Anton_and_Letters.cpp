#include<bits/stdc++.h>
using namespace std;
int main (){
    set <char> s1;
    
  string x;

  getline(cin,x);
  for (int i=0;i<x.length();i++)
  {
      if(x[i]>='a' and x[i]<='z')
      {
        s1.insert(x[i]);
      }
  }
  cout<<s1.size();

    return 0;
}