#include <bits/stdc++.h>
using namespace std;
set<string> ans;
void solve(string &s, string output = "", int i = 0)
{
    if (i == s.size())
    {
        ans.insert(output);
        return;
    }
    solve(s, output, i + 1);
    solve(s, output + s[i], i + 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    solve(s);
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i << endl;
    return 0;
}
