#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string s;
    cin >> s;
    char no = s[s.length() - 1];
    string pre = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] - '0') % 2 == 0)
        {

            // if (pre == "")
            // {
            //     string temp = s;
            //     temp[i] = no;
            //     temp[s.length() - 1] = s[i];
            //     pre = temp;
            // }
            if (s[i] <no)
            {
                string temp = s;
                temp[i] = no;
                temp[s.length() - 1] = s[i];
                pre = temp;
                break;
            }
        }
    }
    if (pre=="")
    {
        for (int i = s.length() - 2; i >= 0; i--)
        {
            if (s[i] % 2 == 0)
            {
                string temp = s;
                temp[i] = no;
                temp[s.length() - 1] = s[i];
                pre = temp;

                break;
            }
        }
    }
    // for (auto it :v)
    // {
    //     cout<<it<<endl;
    // }

    if (pre == "")
    {
        cout << -1 << endl;
    }
    else
    {
        cout << pre<< endl;
    }
    return 0;
}