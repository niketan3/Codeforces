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
        int arr[n];
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = -1;
            arr1[i] = -1;
        }

        int count = n;

        for (int i = 0; i < s.length(); i++)
        {
            if (i == 0)
            {
                arr[0] = s[i] - 48;
            }
            else
            {

                if (arr[i - 1] == 0 and s[i] == '1')
                {

                    arr[i] = 1;
                }
                else if (arr[i - 1] == 1 and s[i] == '0')
                {

                    arr[i] = 0;
                }
                else
                {
                    if(s[i-1]=='0' and s[i]=='1' )
                    {
                        arr[i]=1;
                    }
                    else if(s[i-1]=='1' and s[i]=='0')
                    {
                        arr[i]=0;
                    }
                }
            }
        }

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (i == s.length() - 1)
            {
                arr1[i] = s[i] - 48;
            }
            else
            {

                if (arr1[i + 1] == 0 and s[i] == '1')
                { 
                    arr1[i] = 0;
                }
                else if (arr1[i + 1] == 1 and s[i] == '0')
                {
                   
                    arr1[i] = 1;
                }
                
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        for(int i=1;i<n-1;i++)
        {

        }
        cout << endl;
        cout << count << endl;
    }
    return 0;
}