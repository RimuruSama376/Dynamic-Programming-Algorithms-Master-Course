#include <bits/stdc++.h>
using namespace std;

int sum = INT_MAX;

void solve(int n, vector<int> &arr, int i, int currSum)
{
    // cout << i << " ";
    if (i <= n - 1 && i >= n - 3)
    {
        currSum += arr[i];
        // cout << " : " << currSum << endl;
        sum = min(sum, currSum);
        return;
    }
    currSum += arr[i];
    for (int j = 1; j + i < n && j <= 3; ++j)
    {
        solve(n, arr, i + j, currSum);
    }
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
    for (int i = 0; i < n && i < 3; ++i)
        solve(n, arr, i, 0);
    cout << sum << endl;
    return 0;
}
