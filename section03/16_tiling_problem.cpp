#include <bits/stdc++.h>
using namespace std;

int tiling(int n)
{
    if (n < 4)
        return 1;
    if (n == 4)
        return 2;
    return tiling(n - 1) + tiling(n - 4);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << tiling(n) << endl;
    return 0;
}
