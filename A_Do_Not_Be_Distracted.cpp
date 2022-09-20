#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[26] = {0};
        char prev = '#';
        int a = 1;

        for (int j = 0; j < s.length(); j++)
        {

            if (prev == s[j])
            {
                prev = s[j];
            }
            else
            {
                if (arr[s[j] - 65] == 0)
                {
                    arr[s[j] - 65] = 1;
                    prev = s[j];
                }
                else
                {
                    a = 0;
                    break;
                }
            }
        }
        if (a == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}