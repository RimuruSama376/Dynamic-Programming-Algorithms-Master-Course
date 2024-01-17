#include <bits/stdc++.h>
using namespace std;

int binary_strings(int n, string s = "")
{
    if (s.size() == n)
    {
        return 1;
    }
    int ans = 0;
    ans += binary_strings(n, s + '0');
    if (s.back() != '1')
        ans += binary_strings(n, s + '1');
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << binary_strings(n) << endl;
    return 0;
}
