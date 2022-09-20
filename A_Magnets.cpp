#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int n;
    cin>>n;
    string prev;
    cin>>prev;
    int group=0;
    for (int i=1;i<n;i++)
    {
        string s;
        cin>>s;
        if(s!=prev)
        {
            group++;
        }
        prev=s;
        
    }
    cout<<group+1<<endl;

    return 0;
}