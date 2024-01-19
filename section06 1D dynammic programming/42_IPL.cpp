#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &arr)
{
    if (n <= 3)
    {
        int ans = arr[0];
        for (auto i : arr)
            ans = max(ans, i);
        return ans;
    }
    vector<int> dp(n);
    for (int i = 0; i < n; ++i)
    {
        if (i <= 2)
            dp[i] = arr[i];
        else
        {
            int sum1 = dp[i - 1] + dp[i - 2];
            int sum2 = dp[i - 1] + dp[i - 3];
            int sum3 = dp[i - 2] + dp[i - 3];
            cout << i << " " << arr[i] << " : " << dp[i - 3] << " " << dp[i - 2] << " " << dp[i - 1] << endl;
            dp[i] = max(sum1, max(sum2, sum3)) + arr[i];
        }
    }
    for (auto i : dp)
        cout << i << " ";
    cout << endl;
    return max(dp[n - 3], max(dp[n - 1], dp[n - 2]));
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
