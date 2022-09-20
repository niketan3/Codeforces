#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x>>y;
        int hash1[x.length()]={0};
        int hash2[y.length()]={0};
        for(int i=0;i<x.length();i++)
        {
            hash1[x[i]-'a']++;
        }
        for(int i=0;i<x.length();i++)
        {
            hash2[y[i]-'a']++;
        }
        
    }
    return 0;
}