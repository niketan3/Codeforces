#include <bits/stdc++.h>
using namespace std;
int main()
{
    int boys;
    cin >> boys;
    int arr1[boys];
    for (int i = 0; i < boys; i++)
    {
        cin >> arr1[i];
    }
    int girls;
    cin >> girls;
    int arr2[girls];
    for (int i = 0; i < girls; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + boys);
    sort(arr2, arr2 + girls);
    int j = 0;
    int count = 0;
    int x = max(boys, girls);
    if (x == boys)
    {
        for (int i = 0; i < x and j<girls; i++)
        {
            if (abs(arr1[i] - arr2[j]) <= 1)
            {
                count++;
                j++;
            }
            else
            {
                if (arr2[j] > arr1[i])
                {
                    continue;
                }
                else
                {
                    j++;
                    i--;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < x and j<boys; i++)
        {
            if (abs(arr1[j] - arr2[i]) <= 1)
            {
                count++;
                j++;
            }
            else
            {
                if (arr2[i] > arr1[j])
                {
                    j++;
                    i--;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}