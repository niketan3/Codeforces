#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int digit;
    cin>>digit;
    int sumi;
    cin>>sumi;
    int sum=sumi;
    int count=0;
    string ans="";
    int x=9;
    if(sum==0 and digit >0)
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;   }
    while(x>=0 and count!=digit)
    {
        if(sum>=x)
        {
            sum=sum-x;
            ans=ans+to_string(x);
            count++;
        }
        else
        {
            x--;
        }
    }
    int y=1;
    int countm=0;
    string ans1="";
    while(y<=9 and countm!=digit)
    {
        if(y>9)
        {
            ans1=ans1+'0';
            countm++;
        }
        else
        {
            int left=sumi-y;
            cout<<left<<endl;
            if(left<=(9*(digit-(countm+1))) and (y<=left))
            {
                sumi=sumi-y;
                ans1=ans1+(to_string(y));
                y++;
                countm++;
            }
            else if (y>left and left!=0)
            {
                sumi=0;
                ans1=ans1+(to_string(left));
                // cout<<left<<endl;
                y++;
                countm++;
            }
            else
            {
                y++;
            }
        }
    }
    // cout<<ans1<<" ";
    cout<<ans<<endl;
    return 0;
}