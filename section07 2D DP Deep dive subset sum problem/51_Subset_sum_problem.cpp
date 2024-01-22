#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define REP(n) for (int i = 0; i < n; ++i)

bool solve(int sum, vi &arr, vector<vector<int>> &dp, int i)
{
    if (sum == 0)
        return true;
    if (i >= arr.size() || sum < 0)
        return false;
    if (dp[sum][i] != -1)
        return dp[sum][i];
    bool ans = false;
    dp[sum][i] = 0;
    if (solve(sum - arr[i], arr, dp, i + 1))
    {
        ans = true;
        dp[sum][i] = 1;
    }
    if (!ans && solve(sum, arr, dp, i + 1))
    {
        ans = true;
        dp[sum][i] = 1;
    }
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
        int n, x;
        cin >> n >> x;
        vi arr(n);
        vector<vector<int>> dp(x + 1, vector<int>(n + 1, -1));
        REP(n)
        {
            cin >> arr[i];
        }
        cout << solve(x, arr, dp, 0) << endl;
    }
    return 0;
}
