#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &costs, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int curr = costs[i] + solve(n - i, costs, dp);
        ans = max(ans, curr);
    }
    dp[n] = ans;
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
        int n;
        cin >> n;
        vector<int> costs(n + 1);
        vector<int> dp(n + 1, -1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> costs[i];
        }
        cout << solve(n, costs, dp) << endl;
    }
    return 0;
}
