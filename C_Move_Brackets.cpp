#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        string s;
        cin>>s;
        stack<int >temp;
        int count=0;
        for (int i=0;i<size;i++)
        {
            if(s[i]=='(')
            {
                temp.push('(');
            }
            else 
            {
                if(temp.empty())
                {
                    count++;
                }
                else
                {
                    temp.pop();
                }
            }
        }
        while(!temp.empty())
        {
            count++;
            temp.pop();
        }
        cout<<count/2<<endl;
    }
    return 0;
}