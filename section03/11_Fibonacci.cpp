#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;

int fibonnaci(int n) {
    // if(mp.find(n) != mp.end())
    //     return mp[n];
    if(n == 0 || n == 1)
        return n;
    int result = fibonnaci(n-1) + fibonnaci(n-2);
    mp[n] = result;
    return result;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << fibonnaci(n) << endl;
    return 0;
}

