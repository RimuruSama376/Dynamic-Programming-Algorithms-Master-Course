#include <bits/stdc++.h>
using namespace std;

long long int fact(int n) {
    if(n==1)
        return 1;
    return n*fact(n-1);
}

void solve()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    solve();
    return 0;
}

