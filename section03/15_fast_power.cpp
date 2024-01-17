#include <bits/stdc++.h>
using namespace std;

long long int fastPower(int a, int n)
{   
    if(n == 0)
      return 1 ;
    if(n & 1) 
      return a * fastPower(a, n-1);
    long long int result = fastPower(a, n/2);
    return result * result;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, n;
    cin >> a >> n;
    cout << fastPower(a, n) << endl;
    return 0;
}
