#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v1;
    int n;
    cin>>n;

    int count=0;
    int prev=0;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        
        if(prev<=x)
        {
            
            count++;
            prev=x;
        }
        else
        {
            v1.push_back(count);
            count=1;
            prev=x;
        }

    }

    v1.push_back(count);
    sort(v1.begin(),v1.end());
    cout<<v1.back();
    return 0;
}