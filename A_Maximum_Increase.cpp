#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = 0;
        int count = 0;
        int j = 0;
        long long temp[n] = {0};
        for (int i = 0; i < n; i++)
        {
            if (i != (n - 1))
            {

                if (arr[i] > max)
                {

                    max = arr[i];
                    count++;
                }
                else
                {
                    max = arr[i];
                    temp[j] = count;

                    j++;
                    count = 1;
                }
            }
            else
            {
                if (arr[i] > arr[i - 1])
                {
                    count++;
                    temp[j] = count;
                    j++;
                }
                else
                {
                    temp[j] = count;
                    j++;
                }
            }
        }
        sort(temp, temp + j, greater<int>());
        cout << temp[0] << endl;
    }

    return 0;
}