#include <bits/stdc++.h>
using namespace std;

vector<int> memo;

int solve(string s, int i = 0)
{
    if (i == s.size())
        return 1;
    if (memo[i] != -1)
        return memo[i];
    int ans = 0;
    if (s[i] >= '1' && s[i] <= '9')
        ans += solve(s, i + 1);
    if (i < s.size() - 1 && (s[i] == '1' || (s[i] == '2' && s[i + 1] - '0' < 7)))
    {
        ans += solve(s, i + 2);
    }
    memo[i] = ans;
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        memo = vector<int>(s.size(), -1);
        cout << solve(s) << endl;
    }
    return 0;
}
