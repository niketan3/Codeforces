#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    vector<int> neg;
    vector<int> pos;
    vector<int> ze;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;

        if (x < 0)
        {
            neg.push_back(x);
        }
        else if (x == 0)
        {
            ze.push_back(x);
        }
        else if (x > 0)
        {
            pos.push_back(x);
        }
    }
    if (pos.size() == 0)
    {
        if (neg.size() % 2 == 0)
        {
            int y = neg[1];
            int z = neg[2];
            pos.push_back(y);
            pos.push_back(z);
            cout << neg.size() - 3 << " ";
            int x = neg[0];
            ze.push_back(x);
            for (int x = 3; x < neg.size(); x++)
            {
                cout << neg[x] << " ";
            }
            cout << endl;

            cout << pos.size() << " ";
            for (auto x : pos)
            {
                cout << x << " ";
            }

            cout << endl;
            cout << ze.size() << " ";
            for (auto x : ze)
            {
                cout << x << " ";
            }
            cout << endl;
            return 0;
        }
        int x = neg[0];
        int y = neg[1];
        pos.push_back(x);
        pos.push_back(y);
        cout << neg.size() - 2 << " ";
        for (int i = 2; i < neg.size(); i++)
        {
            cout << neg[i] << " ";
        }
        cout << endl;
        cout << 2 << " ";
        for (auto x : pos)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << ze.size() << " ";
        for (auto x : ze)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else if (neg.size() % 2 == 0)
    {
      
        cout << neg.size() - 1 << " ";
        int x = neg[0];
        ze.push_back(x);
        for (int x = 1; x < neg.size(); x++)
        {
            cout << neg[x] << " ";
        }
        cout << endl;

        cout << pos.size() << " ";
        for (auto x : pos)
        {
            cout << x << " ";
        }

        cout << endl;
        cout << ze.size() << " ";
        for (auto x : ze)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        cout << neg.size() << " ";
        for (auto x : neg)
        {
            cout << x << " ";
        }
        cout << endl;

        cout << pos.size() << " ";
        for (auto x : pos)
        {
            cout << x << " ";
        }

        cout << endl;
        cout << ze.size() << " ";
        for (auto x : ze)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}