#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>s;
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);
        sort(s.begin(),s.end());
        cout<<(x-1)*s[0]+(s[1])<<endl;
        
      
    
    }
    return 0;
}