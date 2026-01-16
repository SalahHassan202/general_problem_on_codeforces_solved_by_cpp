// P. Fibonacci

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll fib[n + 1];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n];
}

int main()
{
    fast;

    solve();

    return 0;
}