#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> curr;
    set<int> s;
    int cnt0 = 0;
    int cntpos = 0;
    int cntneg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] > 0)
        {
            cntpos++;
            s.insert(arr[i]);
            curr.push_back(arr[i]);
        }
        else
        {
            cntneg++;
            s.insert(arr[i]);
            curr.push_back(arr[i]);
        }
    }
    if (cntpos >= 3 || cntneg >= 3)
    {
        cout << "NO\n";
        return;
    }
    if (cnt0 == n)
    {
        cout << "YES\n";
        return;
    }
    if (cnt0 > 0)
    {
        s.insert(0);
        curr.push_back(0);
    }

    //    for(int i=0; i<curr.size(); i++){
    //        for(int j=i+1; j<curr.size(); j++){
    //            int sum = curr[i] + curr[j];
    //            if(s.find(sum) == s.end()){
    //                cout<<"NO\n";
    //                return;
    //            }
    //        }
    //    }
    for (int i = 0; i < curr.size(); i++)
    {
        for (int j = i + 1; j < curr.size(); j++)
        {
            for (int k = j + 1; k < curr.size(); k++)
            {
                int sum = curr[i] + curr[j] + curr[k];
                if (s.find(sum) == s.end())
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}