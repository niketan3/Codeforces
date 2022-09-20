#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string x,y;
        cin>>x>>y;
        if(y.length()>x.length())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            map<char,vector<int>>m;
            for(int i=0;i<x.length();i++)
            {
                m[x[i]].push_back(i);
            }
            int flag=1;
            for(int i=0;i<y.length();i++)
            {
                
            }
        }
    }
    return 0;
}