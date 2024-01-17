#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 0)
        return 0;
    int ans = n % 2;
    return ans + solve(n / 2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for (int n = 0; n <= 20; ++n)
        cout << n << ": " << solve(n) << endl;
    return 0;
}
