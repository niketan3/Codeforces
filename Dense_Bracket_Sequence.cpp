#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int re = 0;
        int ma = 0;
        int in=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='(')
            {
                re++;
            }
            else
            {
                re--;
            }
            
            if(re>ma)
            {
                ma=re;
                in=i;
            }
        }
        for(int i=0;i<ma;i++)
        {

        }
        cout<<ma<<" "<<in<<endl;
    }

    return 0;
}