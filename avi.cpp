#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<string> v;
void solve(string inp, string out)
{
    if (out.size() == inp.size())
    {
        v.push_back(out);
        return;
    }
    char tp = inp[0];
    inp.erase(inp.begin());
    solve(inp, out + tp);
    solve(inp, out);
}
int main()
{
    string s = "abc";
    solve("abcd", "");
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << endl;
    }
    return 0;
}