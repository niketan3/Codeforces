#include <bits/stdc++.h>
using namespace std;
string sort(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length() - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
            }
        }
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        string temp = s;
        int i = 0;
        int j = size - 1;
        while (i < j)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
            i++;
            j--;
        }
        string x = sort(temp);
        if (x == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}