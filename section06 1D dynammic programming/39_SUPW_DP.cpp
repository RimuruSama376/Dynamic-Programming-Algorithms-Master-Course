#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &arr)
{
    if (n <= 3)
    {
        int ans = arr[0];
        for (auto i : arr)
            ans = min(ans, i);
        return ans;
    }
    vector<int> dp(n);
    for (int i = 0; i < n; ++i)
    {
        if (i <= 2)
            dp[i] = arr[i];
        else
        {
            int prevmin = INT_MAX;
            for (int j = 1; j <= 3; ++j)
                prevmin = min(prevmin, dp[i - j]);
            dp[i] = prevmin + arr[i];
        }
    }
    return min(dp[n - 3], min(dp[n - 1], dp[n - 2]));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << solve(n, arr) << endl;
    return 0;
}
