#include <bits/stdc++.h>
using namespace std;

int solve(int n, unordered_map<int, int> &mp)
{
    if (mp.find(n) != mp.end())
        return mp[n];
    if (n == 1)
        return 0;
    if (n < 1)
        return INT_MAX;
    int ans = solve(n - 1, mp);
    if (n % 2 == 0)
        ans = min(ans, solve(n / 2, mp));
    if (n % 3 == 0)
        ans = min(ans, solve(n / 3, mp));
    mp[n] = ans + 1;
    return ans + 1;
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
        unordered_map<int, int> mp;
        int n;
        cin >> n;
        cout << solve(n, mp) << endl;
    }
    return 0;
}
