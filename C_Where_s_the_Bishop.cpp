#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 1;
        int c = 0;
        int f;
        while (n<9)
        {
            n++;
            string s;
            cin >> s;
            if(c==0)
            {
                for (int i = 0; i < 6; i++)
            {
                if (s[i] == '#' and s[i+1] == '.' and s[i + 2] == '#')
                {
                   f=n;
                    c = i + 3;
                    
                break;
                }
            }
            }
        }
        cout <<f << " " << c -1 << endl;
    }
    
}
