#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 3;
    return solve(n - 1) + (n - 1) * solve(n - 2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}
