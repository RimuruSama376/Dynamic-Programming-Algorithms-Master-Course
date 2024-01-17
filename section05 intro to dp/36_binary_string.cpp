#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    int ans = 0;
    ans += solve(n-1);
    ans += solve(n-2);
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // int n;
    // cin >> n;
    for(int i=0;i<=10;++i)
    cout << solve(i) << endl;
    return 0;
}
